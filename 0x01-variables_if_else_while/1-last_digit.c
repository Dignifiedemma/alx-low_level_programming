#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * Description: using the main function
 * this program prints the last digit of a variable 
 */
int main(void)
{int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n);
else if (n < 6)
	printf("Last digit of %d is %d and is less than 6\n", n);
else
	printf("Last digit of %d is %d and is 0", n);
return (0);
}
