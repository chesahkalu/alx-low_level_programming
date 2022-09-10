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
	/* x arithemetic function results last digits of n as x*/

	if (n % 10  > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	if (n % 10 < 6  && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
