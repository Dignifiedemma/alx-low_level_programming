#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
