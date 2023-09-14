#include "main.h"
/**
* print_diagonal - program diagonally '\' character
* @n: parameter
* Return: nothing
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int b, j;

		for (b = 0; b < n; b++)
		{
			for (j = 0; j <= b; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
