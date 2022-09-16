#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character
 * @c: character to be tested
 *
 * return: returns 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)

{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
return (0);
}
