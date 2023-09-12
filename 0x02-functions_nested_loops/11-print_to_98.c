#include "main.h"
#include <stdio.h>
/**
* print_to_98 -program battery street
* @n: starting number
* Returns: nothing
*/
void print_to_98(int n)
{
	int a;

	if (n >= 0 && n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
		}
		printf("\n");
	}
	if (a != 98)
		printf(", ");
	else if (n == 98)
		printf("%d\n", n);
}
