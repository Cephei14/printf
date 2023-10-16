#include "main.h"

/**
 * T0_print_c - function that print a char
 * @print_args: char to print
 * Return: 0
 */

int T0_print_c(va_list print_args)
{
	char n = va_arg(print_args, int);

	write(1, &n, 1);
	return (0);
}
