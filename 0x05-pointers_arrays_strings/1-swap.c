#include "main.h"

/**
 * swap_int - Entry point
 * @a: value of integer
 * @b: value of integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
