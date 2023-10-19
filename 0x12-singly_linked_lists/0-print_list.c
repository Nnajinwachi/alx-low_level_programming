#include "lists.h"

/**
 * print_list - function to print all that is in the list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int counts = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		counts++;
	}
	return (counts);
}
