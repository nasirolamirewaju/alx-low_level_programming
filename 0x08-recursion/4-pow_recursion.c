#include "main.h"

/**
* _pow_recursion - programs that returns the value of x to pwer y
* @x: parameter value
* @y: power
* Return: it returns the result of power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
