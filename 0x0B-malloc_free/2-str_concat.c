#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: char
 * @s2: pointers
 * Return: concat
 */

char *str_concat(char *s1, char *s2)
{
	int i, ci;
	char *conct;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

         i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));
	if (int 1 = 0; i <= len2; i++)
		conct[i + ci] = s2[i];
	return (conct);
}
