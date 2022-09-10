#include <stdio.h>
#include <ctype.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char rv;

	/*
	 * loops through the alphabets from behind
	 * to print alphabets in reverse
	 */
	for (rv = 'z' ; rv >= 'a' ; rv--)
	{
		putchar(rv);
	}
	putchar('\n');
	return (0);
}
