#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the lower case alphabet of char ch
 * Description:using the main function
 * this program prints out the alphabet of ch
 * return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
return (0);
}
