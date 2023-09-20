#include "main.h"

/**
* _strncat - prog to concatenate strings
* @dest: parameter of destination string
* @src: parameter of source string
* @n: parameter
* Return: it returns dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int a;

	for (a = 0; a <= n && *src != '\0'; a++)
	{
		dest[len + a] = *src;
		src++;
	}
	dest[len - a] = '\0';
	return (dest);
}
