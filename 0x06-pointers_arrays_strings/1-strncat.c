#include "main.h"

/**
* _strncat - it concatenate two strings
* @dest: parameter of destination
* @src: parameter of source
* @n: parameter of number strings
* Return: it returns dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	y = 0;

	while (dest[x])
		x++;
	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x + y] = src[y];
	dest[x + y] = '\0';
	return (dest);
}
