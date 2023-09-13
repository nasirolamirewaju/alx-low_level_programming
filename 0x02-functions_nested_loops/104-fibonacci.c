#include <stdio.h>
#define LARGEST 10000000000
/**
* main - print the fibo numbers
* Return: 0
*/
int main(void)
{
	unsigned long int a = 0, x = 1, b = 0, y = 2;
	unsigned long int value1, value2, value3;
	int tally;

	printf("%lu, %lu, ", x, y);
	for (tally = 2; tally < 98; tally++)
	{
		if (x + y > LARGEST || b > 0 || a > 0)
		{
			value1 = (x + y) / LARGEST;
			value2 = (x + y) % LARGEST;
			value3 = a + b + value1;
			a = b, b = value3;
			x = y, y = value2;
			printf("%lu%010lu", b, y);
		}
		else
		{
			value2 = x + y;
			x = y, y = value2;
			printf("%lu", y);
		}
		if (tally != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
