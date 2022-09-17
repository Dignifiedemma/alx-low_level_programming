#include "main.h"
/**
 * _isalpha - function to check if c is a letter
 * @c: is the int that will use for the argument of the function
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 *
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
