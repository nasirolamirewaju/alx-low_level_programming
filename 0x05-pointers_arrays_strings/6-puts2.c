#include "main.h"

/**
* puts2 - it prints string interchangeablely
* @str: it prints string
* Return: it returns void
*/

void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (b % 2 == 0)
			_putchar(str[b]);
	}
	_putchar('\n');
}
