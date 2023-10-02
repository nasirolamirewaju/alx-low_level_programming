#include "main.h"
/**
* _islower - lowercase
* @c: it means parameter to check
* Return: it returns 1 or 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
