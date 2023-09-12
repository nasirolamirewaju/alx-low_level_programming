#include "main.h"
/**
* print_last_digit - program for last digit
* @j: parameter
* Return: it returns w
*/
int print_last_digit(int j)
{
	int w;

	w = j % 10;
	if (j < 0)
		w = -w;
	_putchar(w + '0');
	return (w);
}
