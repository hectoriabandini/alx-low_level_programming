#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */


int main(void)

{
	int x;
	char low;

	for (x = '0'; x <= '9'; x++)
	putchar(x);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);

	return (0);
}
