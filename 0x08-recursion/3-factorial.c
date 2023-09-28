#include "main.h"

/**
* factorial - program that returns factorial
* @n: parameter number
* Return: it returns factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
