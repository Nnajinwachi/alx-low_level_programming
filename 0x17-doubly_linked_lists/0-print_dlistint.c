#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - function to print all that is in the list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counts++;
	}
	return (counts);
}
