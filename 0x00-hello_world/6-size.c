#include<stdio.h>
int (char, int, long int, long long int, float);
/* function prototype for sizeof*/
int main(void)
/**
* main - enrty points
* main - prints the string in the printf function
* Description: using the main function
* this program prints sizes of the various data types
* return: 0
*/
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(li));
printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
