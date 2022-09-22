#include "main.h"
/**
 *cap_string - capitalizes all words in a string
 * @s: string to capitalize
 * Return: returns address of s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char special[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (*(s + i))
	{
		for (j = 0; j < 13; j++)
		{
			if (i == 0 && s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
			if (s[i - 1] == special[j])
			{
				if ((*(s + i) >= 97) && (*(s + i) <= 122))
					*(s + i) -= 32;
				}
			}
		i++;
	}
	return (s);
}

