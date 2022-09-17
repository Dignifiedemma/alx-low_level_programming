#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: returns nothing
 */

int main(void)
{

int n = 1;

while (n < 100)
{

if (n % 15 == 0)

printf("FizzBuzz ");

else if (n % 5 == 0)

printf("Buzz ");

else if (n % 3 == 0)

printf("Fizz ");

else

printf("%d ", n);

n++;

}

printf("Buzz\n");

return (0);

}
