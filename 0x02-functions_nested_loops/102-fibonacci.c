#include <stdio.h>
/**
* main - program func of fibonacci
* Return: it returns 0
*/
int main(void)
{
	unsigned long int value1 = 1;
	unsigned long int value2 = 2;
	unsigned long int next;
	int x;

	printf("%lu, ", value1);
	for (x = 1; x < 50; x++)
	{
		printf("%lu", value2);
		next = value1 + value2;
		value1 = value2;
		value2 = next;
		if (x != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
