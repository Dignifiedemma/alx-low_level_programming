#include <stdio.h>
#include "main.h"
/**
 * main - program that prints either number
 * or fizz or buzz or fizzBuzz
 *
 * return: returns 0
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
