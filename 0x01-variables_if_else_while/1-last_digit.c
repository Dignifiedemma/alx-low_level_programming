#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print the final digit of int n
* Description: using the function main
* this program prints the final digit of n
* Return: 0
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
else if (y < 6 && y != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);
else
	printf("Last digit of %d is %d and is 0\n", n, y);
return (0);
}
