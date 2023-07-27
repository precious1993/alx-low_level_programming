#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in linked list
 * @h: pointer to the list
 * Return: elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
