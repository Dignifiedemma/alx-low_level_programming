#include "main.h"
/**
 * print_remaninng_days - takes adate and prints how many days are
 * left in the year, taking leap years into acount
 * @month: month in number format
 * @dat: day of month
 * @year; year
 * return; void
 */
void print_remaining-days(int month, int day, int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month ==2 && day == 60)
		{
			printf("Invalide date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d/n", day);
			printf("Remaining days: %d/n", 365 - day);
		}
	}
}
