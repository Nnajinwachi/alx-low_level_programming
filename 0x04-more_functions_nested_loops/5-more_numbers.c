#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 0;

		while (b <= 14)
		{
			if (b > 9)

				_putchar(b / 10 + '0');

			_putchar(b % 10 + '0');
			b++;
		}
	_putchar('\n');
	a++;
	}
}
