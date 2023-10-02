#include "main.h"

/**
* *_strcpy - it prints string in copies
* @dest: this is destination
* @src: this is source
* Return: it returns dest
*/

char *_strcpy(char *dest, char *src)
{
	int y;

	for (y = 0; src[y] != '\0'; y++)
		dest[y] = src[y];
	dest[y] = '\0';
	return (dest);
}
