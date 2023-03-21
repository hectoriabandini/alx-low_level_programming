#include "main.h"

/**
 * print_alphabet_10-prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return: Always 0.
 */
void print_alphabt_x10(void)
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
