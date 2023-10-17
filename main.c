#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i, l_, l;
	i = 0;
	l_ = _printf("i=%i\n",i);
	l = printf("i=%i\n",i);
	_printf("l=%i\nl_=%i\n",l,l_);
	printf("l=%i\nl_=%i\n",l,l_);
	return (0);
}
