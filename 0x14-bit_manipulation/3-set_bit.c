#include "main.h"

/**
 * set_bit - function to set a bit to the value of 1
 * @n: pointer to the value to be set
 * @index: position to be changed
 *
 * Return: On success 1, on failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set = 1 << index;
	*n = *n | set;

	return (1);
}
