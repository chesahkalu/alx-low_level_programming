#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *        fib's next no. is addition of last two numbers.
 *
 *
 *
 * Return: 0 if succesful
 */
int main(void)
{
	int loop;
	unsigned long f1 = 0, f2 = 1, fib;

	for (loop = 0; loop < 50; loop++)
	{
		fib = f1 + f2;
		printf("%lu", fib);

		f1 = f2;
		f2 = fib;

		if (loop == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
