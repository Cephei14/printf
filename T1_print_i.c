#include "main.h"

/**
 * T1_print_i - funtion that print an integer using write
 * @print_args: number to be printed
 * Return: 0
*/

int T1_print_i(va_list print_args)
{
	int num, numtest, nlength = 0, i, numdec;
	char *charnum;

	num = va_arg(print_args, int);
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	} numtest = num;
	while (numtest != 0)
	{
		numtest /= 10;
		nlength++;
	} charnum = (char *)malloc(nlength + 1);
	if (charnum == NULL)
		return (1);
	numtest = num;
	if (numtest == 0)
	{
		charnum[0] = '0';
		nlength = 1;
	} else
	{
		i = nlength - 1;
		if (numtest < 0)
		{
			write(1, "-", 1);
			numtest = -numtest;
		}
		while (numtest > 0)
		{
			numdec = numtest % 10;
			charnum[i] = numdec + '0';
			numtest /= 10;
			i--;
		}
	} charnum[nlength] = '\0';
	write(1, charnum, nlength);
	free(charnum);
	return (0);
}
