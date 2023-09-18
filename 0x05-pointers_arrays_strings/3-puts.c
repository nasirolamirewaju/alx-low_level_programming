#include "main.h"

/**
* _puts - program prints string
* @str: prints string
* Return: it returns void
*/

void _puts(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}
