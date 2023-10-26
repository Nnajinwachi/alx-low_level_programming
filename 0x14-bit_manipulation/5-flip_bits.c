#include "main.h"

/**
 * flip_bits - function to flip values of bits
 * @n: values to be flipped
 * @m: index positions of bits
 *
 * Return: the amount of counts
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int i, j;

	for (i = 64; i > 0; i--)
	{
		j = (n ^ m) >> i;

		if (j & 1)
			count++;
	}
	return (count);
}
