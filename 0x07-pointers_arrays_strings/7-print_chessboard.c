#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int h;
	int m;

	for (h = 0 ; h < 8 ; h++)
	{
		for (m = 0 ; m < 8 ; m++)
			_putchar(a[h][h]);
		_putchar('\n');
	}
}
