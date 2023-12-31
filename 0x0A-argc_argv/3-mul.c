#include <stdio.h>
#include "main.h"

/**
* _atoi - it converts a string to integer
* @s: string to be converted
* Return: int converted
*/

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: it returns 0
*/

int main(int argc, char *argv[])
{
	int result, number1, number2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);
	result = number1 * number2;
	printf("%d\n", result);

	return (0);
}
