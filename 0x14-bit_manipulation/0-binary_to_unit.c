#include "main.h"

/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointer to the string
 *
 * Return: On success the converted number,
 * On failure 0
 */
unsigned int binary_to_uint(const char *b)
{
	int next = 0;
	unsigned int index = 0;

	if (!b)
		return (0);

	while (b[next])
	{
		if (b[next] < '0' || b[next] > '1')
			return (0);

		index = 2 * index + (b[next] - '0');
		next++;
	}

	return (index);
}
