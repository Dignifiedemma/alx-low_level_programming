#include "main.h"
/**
 * _islower - function to check for lowercase character.
 * @c: is the int that will be used for the argument of the function
 * Return: Returns 1 if c is lowercase
 *
 * Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
