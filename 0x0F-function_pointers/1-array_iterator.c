#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Array funtion
 * @array: array
 * @size: size of array
 * @action: function pointer
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
