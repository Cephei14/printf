#include "main.h"

/**
 * s_lenc - function that count string's length
 * @c: string in question
 * Return: string's length
 */


int s_lenc(const char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
