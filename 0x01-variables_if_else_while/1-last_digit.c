#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * Description: using the main function
 * this program prints the last digit of a variable 
 */
int main(void)
{
int n; 
int y;
srand(time(0));
n = rand() - RAND_MAX / 2;
y = n % 10;
if (y > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, y);
else if (y < 6 && y !=0)
	printf("Last digit of %d is %d and is less than 6\n", n, y);
else
	printf("Last digit of %d is %d and is 0", n, y);
return (0);
}
