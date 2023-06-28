#include "main.h"

/**
 * _strncpy - writes a function that copies a string
 * @dest: copies a string
 * @src: copies a string
 * @n: copies a string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
