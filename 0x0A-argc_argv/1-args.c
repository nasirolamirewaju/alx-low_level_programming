#include <stdio.h>

/**
* main - program prints arguments
* @argc: argument count
* @argv: argument vector
* Return: it returns 0
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
