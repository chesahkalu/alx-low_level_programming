#include <stdio.h>
#include "main.h"

/**
 * main - Almighty Fizzbuzz, prints numbers from 1 to 100,
 *        but any numbers which is multiple of 3, print Fizz,
 *        and any numbers which is multiple of 5 print Buzz,
 *        and numbers both multiple of 3 & 5,print FizzBuzz.
 *
 * Return: Always 0.
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
			continue;/*continue putting space after each number until number 100*/
		printf(" ");
	}
	printf("\n");

	return (0);
}

