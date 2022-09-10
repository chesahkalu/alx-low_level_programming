#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* Main - starts the program*/
int main(void)
{
	int n;

	/*code generates random number*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
