#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - is entry point
 *
 * Return: 1, if succesful
 */
int main(void)
{
	int n;

	/*code generates random number*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* This arithemetic function results last digits of n*/
	int x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	if (x < 6  && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
