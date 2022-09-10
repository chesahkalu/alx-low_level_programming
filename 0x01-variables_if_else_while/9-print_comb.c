#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/*
	 * prints all single integers, with comma and space after
	 * loops through 0-9, prints them,prints comma,print space,
	 * use only putchar
	 */
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		if (x == 9)
			continue;
		putchar((x % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
