#include "main.h"

/**
 * get_endianness - function to check endianness
 *
 * Return: void
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
