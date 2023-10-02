#include "main.h"
/**
* _isalpha - alphabets cases are considered
* @c: parameters
* Return: it returns 0 or 1
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
