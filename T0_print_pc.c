#include "main.h"

/**
 *T0_print_pc - fct that print %
 *@n: =37 or %
 *Return: 0
 */

int T0_print_pc(int n)
{
	n = 37;
	write(1, &n, 1);
	return (0);
}
