#include "main.h"

/**
* rev_string - it reverses a string
* @s: it reverses string
* Return: it returns void
*/

void rev_string(char *s)
{
	int y;
	char z;
	int count = 0;

	for (i = 0; s[y] != '\0'; y++)
		count++;
	for (y = 0; y < count / 2; y++)
	{
		z = s[y];
		s[y] = s[count - 1 - y];
		s[count - 1 - y] = z;
	}
}
