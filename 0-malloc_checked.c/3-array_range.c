#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: first interger number
 * @max: last int number
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int i, z;
	int *a;

	if (min > max)
		return (NULL);
	z = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < z; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
