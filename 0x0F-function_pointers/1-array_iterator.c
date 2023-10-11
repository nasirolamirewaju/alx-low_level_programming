#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - main program for printing each array elem on a newl
* @array: parameter for array
* @size: parameter for how many elem to print
* @action: parameter for pointer to print in regular or hex
* Return: it returns void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
