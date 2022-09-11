#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: prints string of the main
 *
 * return: always return 1 (success)
 */
int main(void)
{
char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str1, 59);
return (1);
}
