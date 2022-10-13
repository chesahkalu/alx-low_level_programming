#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs imple operations and print result
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int num1, num2, a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = func(num1, num2);
	printf("%d\n", a);
	return (0);
}
