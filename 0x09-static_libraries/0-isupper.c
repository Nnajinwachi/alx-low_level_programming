#include "main.h"

/**
 * _isupper - Entry point
 * @c: Entry value
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 55 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
