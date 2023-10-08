#include <stdlib.h>
#include "main.h"

/**
 * *_memset - program prints fills memory with a constant byte
 * @s: parameter for memory area to be filled
 * @b: parameter for char to copy
 * @n: parameter for  number of times to copy b
 * Return: it returns pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - program that allocates memory for an array
 * @nmemb: parameter for number of elements in the array
 * @size: parameter for size of each element
 * Return: it returns pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
