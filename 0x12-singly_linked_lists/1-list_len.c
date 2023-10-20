#include "lists.h"

/**
 * list_len - function that returns the numer of elements in a linked list
 * @h: pointer to the list
 *
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	int count = 0;

	tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
