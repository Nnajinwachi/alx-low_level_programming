#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: Entry value
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int m;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (k = 0; k < m; k++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
