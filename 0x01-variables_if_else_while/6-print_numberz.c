#include <stdio.h>
#include <ctype.h>
/**
 * Main - prints all single digits numbers 0f base 10,
 * starting from zero,only using put char,no char variables
 *
 * Return: 0, if succesful
 */
int main(void)
{
	int x;
	
	for (x = 0 ; x < 10 ; x++)
		putchar((x % 10 + '0'));
	putchar('\n');
	return (0);
}
