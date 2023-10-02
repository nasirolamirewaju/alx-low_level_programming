#include <stdio.h>

/**
* main - program to print argument
* @argc: argument count
* @argv: argument vectors
* Return: it returns 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
