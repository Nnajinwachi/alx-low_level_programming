#include "main.h"

/**
 * _strlen - Entry point
 * @s: length of string
 * Return: Always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
