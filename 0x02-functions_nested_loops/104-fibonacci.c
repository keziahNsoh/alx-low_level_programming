#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 * Return: Always 0 (Success)
 */

int main(void)

{
	int count;
	unsigned long fib2 = 1, fib3 = 2, sum;

	for (count = 2; count < 99; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if(count == 98)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

