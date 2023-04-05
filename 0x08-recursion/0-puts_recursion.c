#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *v)
{
	if (*v)
	{
		_putchar(*v);
		_puts_recursion(v + 1);
	}

	else
		_putchar('\n');
}
