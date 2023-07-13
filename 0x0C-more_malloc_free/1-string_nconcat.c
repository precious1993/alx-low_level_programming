#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - write a function that concanates two strings
 * @n: strings
 * @s2: two strings
 * @s1: two strings
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	len = len1 + len2 + 1;
	{
else
	len = len1 + n + 1;
	}

result = malloc(len);

if (result == NULL)
{
	return (NULL);
}

strcpy(result, s1);
strncat(result, s2);

return (result);
}

