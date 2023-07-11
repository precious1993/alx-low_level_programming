#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0 (Success)
 */

char *_strdup(char *str)
{
	char *copy = NULL;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

         i = 0;
	while (str[i] != '\0')
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		copy[r] = str[r];

	return (copy);
}
