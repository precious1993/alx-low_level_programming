#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - it allocates memory using malloc
 * @b: memory
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		printf("Error: malloc failed\n");
		exit(98);
	}
	return (p);
}
