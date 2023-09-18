#include "main.h"

/**
* rev_string - it reverses a string
* @s: it reverses string
* Return: it returns void
*/

void rev_string(char *s)
{
	int y;
	int count = 0;

	for (y = 0; s[y] != '\0'; y++)
		count++;
	for (y = 0; y < count / 2; y++)
	{
		char z;

		z = s[y];
		s[y] = s[count - 1 - y];
		s[count - 1 - y] = z;
	}
}
