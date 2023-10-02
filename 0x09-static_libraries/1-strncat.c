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
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
