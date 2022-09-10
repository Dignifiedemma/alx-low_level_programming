#include<stdio.h>
int main(void)
/**
* main - prints the string in the printf function
* Description: using the main function
* this program prints sizes of the various data types
* return: 0
*/
{
int i;
char c;
long int li;
long long int lli;
float f;
printf("The size of an int is: %d.\n", sizeof(i));
printf("the size of a char is: %d.\n", sizeof(c));
printf("The size of a long int is: %d.\n", sizeof(li));
printf("The size of a long long int is: %d.\n", sizeof(lli));
printf("The size of a float is: %d.\n", sizeof(f));
return (0);
}
