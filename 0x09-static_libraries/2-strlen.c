#include "main.h"

/**
* _strlen - program length of string
* @s: parameter counted
* Return: it returns the string length
*/

int _strlen(char *s)
{
	 int a;
	 int count = 0;

	for (a = 0; s[a] != '\0'; a++)
		count++;
	return (count);
}
