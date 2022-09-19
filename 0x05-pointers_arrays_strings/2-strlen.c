#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pinter parameter
 * Retrun: return the value of result
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
