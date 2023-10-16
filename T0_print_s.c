#include "main.h"

/**
 * T0_print_s - function that print a  string
 * @print_args: string to print
 * Return: 0
 */

int T0_print_s(va_list print_args)
{
	int i = 0, l;
	char *c = va_arg(print_args, char *);

	if (c == NULL)
		c = "(nill)";
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	l = i;
	return (l);
}
