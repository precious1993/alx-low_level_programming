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
	char *arr = NULL;

	if (size == 0)
		return (NULL);

		arr = malloc(sizeof(char) * size);
		if (arr == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			arr[i] = c;

		return (arr);

}
