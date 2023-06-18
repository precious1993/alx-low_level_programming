#include <stdio.h>

/**
 * main - Prints combination of numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
