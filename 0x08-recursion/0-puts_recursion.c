#include "main.h"

/**
* _puts_recursion - it prints string
* @s: parameter of string to print
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
