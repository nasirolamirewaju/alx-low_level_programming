#include <stdio.h>
/**
* main - sum of all multiples
* Return: it returns 0
*/
int main(void)
{
	int sum_of_mult = 0;
	int a;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum_of_mult = sum_of_mult + a;
	}
	printf("%d\n", sum_of_mult);
	return (0);
}
