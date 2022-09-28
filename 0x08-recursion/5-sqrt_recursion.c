#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
