#include <stdlib.h>
#include "main.h"

/**
 * *array_range - programs that creates an array of integers
 * @min: parameter for minimum range of values stored
 * @max: parameter for maximum range of values stored and number of elements
 * Return: it returns pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}

