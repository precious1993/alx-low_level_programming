#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @n: input value
 *
 * Return: n value
 */
char *leet(char *n)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "44330711";
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
