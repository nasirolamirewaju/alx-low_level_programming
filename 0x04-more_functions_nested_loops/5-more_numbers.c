#include "main.h"
/**
* more_numbers - program constit universal numbers
* Return: returns nothing
*/
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b % 10 + '0');
		}
	_putchar('\n');
	}
	_putchar('\n');
}
