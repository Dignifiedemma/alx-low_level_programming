#include <stdio.h>
#include "main.h"

/**
 * print-line prints a straight line
 * @n: parameter
 * return: return nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}