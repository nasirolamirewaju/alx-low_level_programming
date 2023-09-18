#include "main.h"

/**
* print_array - it prints array elements
* @a: array
* @n: number of element
* Return: it returns void
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
