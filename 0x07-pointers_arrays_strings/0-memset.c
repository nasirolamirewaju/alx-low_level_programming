#include "main.h"

/**
* _memset - prog to fill blck of memory
* @s:parameter starting address
* @b: parameter desired value
* @n: parameter number of bytes
* Return: It changes array with new value
*/

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
