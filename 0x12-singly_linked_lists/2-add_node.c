#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_t add_node - Adds new node at the beginning of a list
 * @head: The original linked list
 * @str: The string to add to the node
 *
 * Return: The address of the new list of NULL if it failed
 */
list_t *add_node(list_t *head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup;
	temp->next = *head;
	*head = temp;

	return (temp);
}
