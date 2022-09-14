#include "main.h"
/**
*
* print_times_table - Prints a multiplication table up to param
* @n: The number to be treated
*
* Return: Number matrix
*/
void print_times_table(int n)

{
	int num, prod, mult;

	for (num = 0; num <= 0; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 0; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;
				if (prod <= 15)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
