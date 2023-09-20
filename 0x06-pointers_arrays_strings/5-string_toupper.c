#include "main.h"

/**
* *string_toupper - it program to change lower to upper
* @str: string to return
* Return: it returns string
*/

char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[1] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
	}
	return (str);
}
