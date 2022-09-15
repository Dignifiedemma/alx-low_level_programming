#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks of a character is uppercase or not
 * @c: characterto be tested
 * return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	if (( c >='A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
