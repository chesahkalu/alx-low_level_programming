#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers
 *        not below 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, fib;
	float sum;

	while (1)
	{
		fib = f1 + f2;
		if (fib > 4000000)
			break;

		if ((fib % 2) == 0)
			sum += fib;

		f1 = f1;
		f2 = fib;
	}
	printf("%.0f\n", sum);

	return (0);
}
