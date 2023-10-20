#include "lists.h"

/**
 * free_list - function that frees a data structure list
 * @head: pointer to the first node
 *
 * Return: vooid
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		free(head->str);
		head = head->next;
		free(temp);
	}
}
