#include "main.h"
/**
 * _strstr -  function that locates a substring
 * @haystack: a string
 * @needle: a substring
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int k = 0, p = 0;

	while (haystack[k])
	{
		while (needle[p] && (haystack[k] == needle[0]))
		{
			if (haystack[k + p] == needle[p])
				p++;
			else
				break;
		}
		if (needle[p])
		{
			k++;
			p = 0;
		}
		else
			return (haystack + k);
	}
	return (0);
}


