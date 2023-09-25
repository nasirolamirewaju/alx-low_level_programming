#include "main.h"

/**
* _strpbrk - it program entry point
* @s: parameter for input1
* @accept: parameter for input2
* Return: it returns 0
*/

char *_strpbrk(char *s, char *accept)
{
		int b;

		while (*s)
		{
			for (b = 0; accept[b]; b++)
			{
			if (*s == accept[b])
			return (s);
			}
		s++;
		}
	return ('\0');
}
