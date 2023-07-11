#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates arrays and initializes with a specific char
 * @c: char to assign
 * @size: size of array
 * Description: create array of size and assign char c
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = NULL;

		str = malloc(sizeof(char) * size);
		if (size == 0 || str == NULL )
			return (NULL);

		for (i = 0; i < size; i++)
			str[i] = c;

		return (str);

}
