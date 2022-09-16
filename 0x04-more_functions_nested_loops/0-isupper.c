#include "main.h"
#include <stdio.h>

/**
 * isupper - function checks if a character is uppercase or not
 * @c: character to be tested
 * return: returns 1 if uppercase and 0 if not
 */

int _isupper(int c)

{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
return (0);
}
