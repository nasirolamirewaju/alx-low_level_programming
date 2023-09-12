#include "main.h"
#include <stdio.h>
/**
* times_table - multiplication
* Return: it returns values
*/
void times_table(void)
{
	int a, b, solution;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			solution = a * b;
			if (b == 0)
				printf("%d, ", solution);
			else
			{
				printf("%2d", solution);
				if (b != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
