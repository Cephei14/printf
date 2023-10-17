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
	int len;
	int len2;

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("%d, %d\n", len, len2);
	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("%d, %d\n", len, len2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("%d, %d\n", len, len2);
	len = _printf("String:[%s]\n", NULL);
	len2 = printf("String:[%s]\n", NULL);
	printf("%d, %d\n", len, len2);
	len = _printf("String:[% ]\n", "I am a string !");
	len2 = printf("String:[% ]\n", "I am a string !");
	printf("%d, %d\n", len, len2);
	len = _printf("String:[%zyy]\n", "I am a string !");
	len2 = printf("String:[%zyy]\n", "I am a string !");
	printf("%d, %d\n", len, len2);
	len = _printf("String:[%", "1");
	len2 = printf("String:[%", "1");
	printf("%d, %d\n", len, len2);
	len = _printf("String:[%\n", "1");
	len2 = printf("String:[%\n", "1");
	printf("%d, %d\n", len, len2);
	len = _printf("String:[%\n55");
	len2 = printf("String:[%\n55");
	printf("%d, %d\n", len, len2);
	return (0);
}
