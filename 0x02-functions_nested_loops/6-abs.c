#include "main.h"
#include <stdio.h>
/**
 * int _abs int - function that computes the absolute value of an integer
 * @c: is the int that will be used for the argument of the function
 * return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	} 
	else
	return (c * -1);
}