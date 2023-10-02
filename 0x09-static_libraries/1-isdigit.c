#include "main.h"
/**
* _isdigit - program of isdigit
* @c: parameter
* Return: it returns 1 and 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
