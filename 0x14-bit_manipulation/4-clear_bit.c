#include "main.h"

/**
 * clear_bit - function to set the value of a bit to 0
 * @n: pointer to the vslue
 * @index: index of the position to be changed
 *
 * Return: On success 1, on failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	clear = 1 << index;
	*n = *n & ~(clear);

	return (1);
}
