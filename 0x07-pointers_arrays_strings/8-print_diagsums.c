#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: pointer
 * @size: column
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, n, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		n = (i * size) + i;
		sum1 += *(a + n);
	}
	for (j = 0; j < size; j++)
	{
		n = (j * size) + (size - 1 - j);
		sum2 += *(a + n);
	}
	printf("%i, %i\n", sum1, sum2);
}
