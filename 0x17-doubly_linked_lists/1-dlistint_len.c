#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the numer of elements in a linked list
 * @h: pointer to the list
 *
 * Return: number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	ssize_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
