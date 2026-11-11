#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: Two-dimensional array containing the chessboard
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col = 0;

	while (row < 8)
	{
		col = 0;

		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}

		_putchar('\n');
		row++;
	}
}
