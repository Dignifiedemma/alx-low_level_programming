#include <stdio.h>
/**
 * main - main function
 *
 * return: end program
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
