#include <unistd.h>
/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a newline, to standard error.
 * ReturnL: always 1.
 */

int main(void)

{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 39);
return (1);
}
