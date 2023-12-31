#include "main.h"

/**
* _sqrt_recursion - program that returns the natural square root
* @n: parameter number
* Return: it returns square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
* actual_sqrt_recursion - recurses to find natural
* @n: number to calculate square root
* @i: iterator
* Return: it returns square root
*/

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
