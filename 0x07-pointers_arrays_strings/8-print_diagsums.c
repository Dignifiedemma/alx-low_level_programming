#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return : Return ()
 */
void print_diagsums(int *a, int size)
{
	int o, b, c, d = 0, e = 0;

	for (o = 0; o < size; o++)
	{
		c = (o * size) + o;
		d += *(a + c);
	}
	for (b = 0; b < size; b++)
	{
		c = (b * size) + (size - 1 - b);
		e += *(a + c);
	}
	printf("%o, %o\n", d, e);
}
