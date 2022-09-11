#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** main - prints the out put of the string
 * Description: using the main function
 * thi program prints if (number stored in the variable is positive or negative)
 * return: 0
 */
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
