#include "main.h"
/**
 * _puts - wirte a function that prints strings
 * followed by a new line
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
