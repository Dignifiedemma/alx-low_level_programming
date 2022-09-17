#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	long int n, a =1, b =1, s;
	
	printf("%1d", a);

	for (n = 1; n < 50; ++n)
	{
		s = a + b;
		printf(", %1d", s);
		a =b;
		b = a;
	}
	putchar(10);
	return (0);
}
