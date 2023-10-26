#include "main.h"

/**
 * print_binary - function to convert to binary using bitwise
 * @n: stores number to be converted
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned int value;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		value = n >> i;

		if (value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
