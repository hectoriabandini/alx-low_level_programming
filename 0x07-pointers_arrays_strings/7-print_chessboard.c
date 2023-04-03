#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int f;

	for (i = 0; i < 8; i++)
	{
		for (f = 0; f < 8; f++)
			_putchar(a[i][f]);
		_putchar('\n');
	}
}
