#include "main.h"

/**
 *_puts - prints a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void _puts(char *str)
{
	int m;

	for (m = 0; str[m]; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
