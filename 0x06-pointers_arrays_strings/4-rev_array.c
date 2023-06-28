#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: array of integers
 * @n: array of integers
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
