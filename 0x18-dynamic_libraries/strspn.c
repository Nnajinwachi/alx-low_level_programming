#include "main.h"


/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer s
 * @accept: pointer to equate
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
