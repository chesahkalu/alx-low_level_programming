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
		for (n = 0; n < 8; n++)
		{
			_putchar(a[i][n]);
		}
		_putchar('\n');
	}
}
