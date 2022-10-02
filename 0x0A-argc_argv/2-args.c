#include <stdio.h>

/**
 * main - Prints all arguments
 * @argc: Argument count/number of argument inputed
 * @argv: Argument vector , array of pointers to the arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i = 0;

	for (i = 0 ; i < argc ; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
