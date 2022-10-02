#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: Argument count/number.
 * @argv: Argument vector , array of pointers to the arguments.
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int a;

	a = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", a);

	return (0);
}
