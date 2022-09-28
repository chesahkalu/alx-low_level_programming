#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: chessboard to be printed.
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
