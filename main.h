#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
int T0_print_c(va_list print_args);
int T0_print_s(va_list print_args);
int T0_print_pc(int);
int T1_print_d(va_list print_args);
int T1_print_i(va_list print_args);
int T1_print_i(va_list print_args);
int s_len(char *c);
int s_lenc(const char *c);
int _printf(const char *format, ...);

/**
 * struct handle - structure that take c and fct pointer
 * @c: directive name's charachter
 * @ft: function related to the directive
 */

typedef struct handle
	{
	char c;
	int (*ft)();
	} prnt;
#endif
