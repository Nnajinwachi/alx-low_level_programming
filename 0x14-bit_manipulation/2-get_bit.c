#include "main.h"

/**
 * get_bit - function to get the value of the bit at an index
 * @n: stores the decimal value to be converted
 * @index: index of the bit to be returned
 *
 * Return: On success value at index,
 * On failure -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
