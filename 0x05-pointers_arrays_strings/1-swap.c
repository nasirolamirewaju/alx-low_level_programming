#include "main.h"

/**
* swap_int - two numbers are swapped
* @a: parameter 1
* @b: second parameter
* Return: it returns void
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
