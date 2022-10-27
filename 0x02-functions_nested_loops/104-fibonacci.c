#include <stdio.h>

/**
 * main - print first 98 fibonacci
 *
 * Return: 0 always.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 97)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
