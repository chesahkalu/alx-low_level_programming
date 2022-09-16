#include <stdio.h>

/**
 * main - Prints the numbers from 1-100,  for multiples of 3,
 *        Fizz is printed instead of the number, for multiples of 5,
 *        Buzz, and for multiples of 3 and 5 FizzBuzz is printed.
 *
 * Return: 0 if succesful.
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", number);
		}
		if (number == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}

