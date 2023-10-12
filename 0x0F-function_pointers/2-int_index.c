#include "function_pointers.h"

/**
 * int_index -to search for an index
 * @array: array of elements
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
