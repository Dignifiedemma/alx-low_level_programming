#include <unistd.h>
/**
 * main - Entry point
 * Description: using the main function
 * this program prints the string
 * return: 1
 */
int main()
{
char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str1, 59);
return (1);
}
