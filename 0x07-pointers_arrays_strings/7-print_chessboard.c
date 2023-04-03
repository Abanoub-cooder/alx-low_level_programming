#include "main.h"
/**
 * print_chessboard - Entry point
 * @a:array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int h;
	int v;

	for (h = 0 ; h < 8 ; h++)
	{
		for (v = 0 ; v < 8 ; v++)
		{
		_putchar(*(*(h + a) + v));
		}
		_putchar('\n');
	}
}
