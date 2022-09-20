#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pinter parameter
 * Retrun: the strlen function returns the number of bytes in 
 * the string pointed to bt s
 */
int _strlen(char *s)

{
	int n = 0;

	while (s[n] != '\0')
{
	n++;
}
return (n);
}
