#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates ana rray of chars, and initializes it
 * @size: size of memory
 * @c: variable
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
