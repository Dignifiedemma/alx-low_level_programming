#include <stdio.h>
/**
 * main - entry point
 * Description: using the main function
 * thi program prints positive , negative numbers and zero
 * return: 0
 */
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
else
	printf("%d is zero\n", n);
return (0);
}
