#include "main.h"

/**
* print_rev - prog string in reverse
* @s: it prints string
* Return: it returns void
*/

void print_rev(char *s)
{
	int y;
	int count = 0;

	for (y = 0; s[y] != '\0'; y++)
		count++;
	for (y = count - 1; y >= 0; y--)
		_putchar(s[y]);
	_putchar('\n');
}
