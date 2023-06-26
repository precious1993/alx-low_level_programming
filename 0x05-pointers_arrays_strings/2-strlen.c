#include "main.h"
/**
 * _strlen - write a function that returns a length
 * @s: returns a length
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
