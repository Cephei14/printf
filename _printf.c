#include "main.h"

/**
 * _printf - funtion that do a formatted printing
 * @format: formatted string
 * Return: l of printed things
*/

int _printf(const char *format, ...)
{
	int i = 0, j, l = 0;
	va_list print_args;
	prnt h[5] = {
	{'i', T1_print_i}, {'d', T1_print_d},
	{'%', T0_print_pc}, {'c', T0_print_c}, {'s', T0_print_s}
	};

	va_start(print_args, format);
	if (format == NULL)
		return (-1);
	if (format)
	{
		while (format[i] != '\0')
		{
			if (format[i] != '%')
			{
				write(1, &format[i], 1), l++;
			} else
			{
				i++, j = 0;
				while (j <= 4)
				{
				if (format[i] == h[j].c)
				{
					l = l + h[j].ft(print_args);
					break;
				} j++;
				}
				if (j == 5)
				{
					write(1, "%", 1);
					write(1, &format[i], 1);
					l += 2;
				}
			} i++;
		}
	}
	va_end(print_args);
	return (l);
}
