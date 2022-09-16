#include <stdio.h>
/**
 * main - prints the largest priome factor
 * of a number
 *
 * return: returns 0
 */
int main(void)
{
	long int c, b, a = 612852475143;
	
	while (a != 1)
{
for (b = 2; b <= a; ++b)
{
if ((a % b) == 0)
{
break;
}
}
c = (a / b);
a = c;
}
printf("%li\n", b);
return (0);
}
