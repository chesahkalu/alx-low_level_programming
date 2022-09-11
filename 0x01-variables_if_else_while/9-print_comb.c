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
		putchar((x % 10) + '0');
		if (x == 9)
		/*continue printing comma and space except if x == 9*/
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
