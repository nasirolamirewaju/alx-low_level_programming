#include <stdio.h>
/**
* main - program func first 100 fibo
* Return: it returns 0
*/
int main(void)
{
	int a = 0;
	int x = 0, y = 1, next_value = 0;

	while (a < 98)
	{
		next_value = x + y;
		x = y;
		y = next_value;
		printf("%d", next_value);
		if (a < 97)
			printf(", ");
		a++;
	}
	putchar('\n');
	return (0);
}
