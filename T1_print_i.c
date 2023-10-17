#include "main.h"

/**
 * T1_print_i - funtion that print an integer using write
 * @print_args: number to be printed
 * Return: 0
*/

int T1_print_i(va_list print_args)
{
	int num, l = 0, i, ml = 0, numdec, numtest;
	char *charnum;

	num = va_arg(print_args, int);
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		write(1, "-", 1), ml++;
		num = -num;
	} numtest = num;
	while (numtest != 0)
	{
		numtest /= 10;
		l++;
	}
	charnum = (char *)malloc(l + 1);
	numtest = num;
	i = l - 1;
	while (numtest > 0)
	{
		numdec = numtest % 10;
		charnum[i] = numdec + '0';
		numtest /= 10;
		i--;
	}
	charnum[l] = '\0';
	write(1, charnum, l);
	free(charnum);
	return (l + ml);
}
