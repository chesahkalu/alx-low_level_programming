#include <stdio.h>
#include <ctype.h>
/**
 * main - prints single numbers of base1m
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/*
	 * prints all single digits numbers 0f base 10,
	 * starting from zero,only using put char,no char variables
	 */
	int x;

	for (x = 0 ; x < 10 ; x++)
		putchar((x % 10 + '0'));
	putchar('\n');
	return (0);
}
