#include <stdio.h>
<<<<<<< HEAD
=======
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
>>>>>>> f05482a1fbae864539d919f81048681e5d142ead

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
