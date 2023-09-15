#include "main.h"

/**
 * print_square - Entry point
 * @size: Entry value
 * Return: Always 0
 */

void print_square(int size)
{
	int m;
	int k;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
