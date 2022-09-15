#include "main.h"
#include <stdio.h>

/**
 * print_number - function prints all number from 
 * 0 to 9
 *
 * return: returns nothing
 */

void print_numbers(void)

{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
