#include "main.h"

/**
 * print_alphabet_10-prints_x10 - make alphabet x10 times
 *
 * Return: Void
 */

void print_alphabet_x10(void)

{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar(ch);
	i++;
	}
}
