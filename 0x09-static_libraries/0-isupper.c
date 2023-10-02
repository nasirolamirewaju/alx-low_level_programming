#include "main.h"
/**
* _isupper - program for uppercase
* @c: parameter
* Return: true 1 and failure is 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
