#include "main.h"
/**
* _strspn - it programs entry point
* @s: parameter of input
* @accept: parameter of input
* Return: it returns 0
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				b++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
