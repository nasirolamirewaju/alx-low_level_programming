#include "main.h"

/**
* _memcpy - program that copies memory area
* @dest: parameter memory where stored
* @src: parameter memory where copied
* @n: parameter number of bytes
* Return: it returns copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int j = n;

	for (; d < j; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
