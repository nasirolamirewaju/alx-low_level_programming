#include "main.h"
/**
* print_most_numbers - program for most numbers
* Return: it returns nothing
*/
void print_most_numbers(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		if (b != 2 && b != 4)
			_putchar(b + '0');
	}
	_putchar('\n');
}
