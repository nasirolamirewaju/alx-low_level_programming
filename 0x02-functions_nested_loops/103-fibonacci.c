#include <stdio.h>
/**
* main - program of fibo sequence
* Return: it returns 0
*/
int main(void)
{
	int do_not_exceed = 4000000;
	int value1 = 1;
	int value2 = 2;
	int next;
	int sum_fibo = 2;

	while (next <= do_not_exceed)
	{
		next = value1 + value2;
		if (next % 2 == 0)
			sum_fibo = sum_fibo + next;
		value1 = value2;
		value2 = next;
	}
	printf("%d\n", sum_fibo);
	return (0);
}
