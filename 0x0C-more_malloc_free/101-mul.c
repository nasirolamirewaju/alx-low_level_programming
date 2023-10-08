#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - programs that checks if a string contains a non-digit char
 * @s: parameter for string to be evaluated
 * Return: it returns 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - it returns the length of a string
 * @s: parameter string to evaluate
 * Return: it returns the length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - program that handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - program for multiplies two positive numbers
 * @argc: parameter for number of arguments
 * @argv: parameter for array of arguments
 * Return: it returns always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, len, a, carry, digit1, digit2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	len = length1 + length2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (a = 0; a <= length1 + length2; a++)
		result[a] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = s1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			digit2 = s2[length2] - '0';
			carry += result[length1 + length2 + 1] + (digit1 * digit2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (a = 0; a < len - 1; a++)
	{
		if (result[a])
			b = 1;
		if (b)
			_putchar(result[a] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
