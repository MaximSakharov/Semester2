#include <stdio.h>
#include "structDate.h"
#include "dateFunctions.h"
#include <stdlib.h>
#include "functions.h"

int LeapYear(Date* date)
{
   int year = date->year;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int AmountOfDays(Date* date)
{
	int days = date->day-1;
	int month = date->month;
	
	for (int i = 1; i < month; ++i)
		days += DaysInMonth(i, date);

	return days;
}

void TimeDifference(Date* date1, Date* date2)
{
   int minutes = date1->minutes - date2->minutes;
   int hour = date1->hour - date2->hour;
   int day = date1->day - date2->day;
   int month = date1->month - date2->month;
   int year = date1->year - date2->year;
   int difMonth = date1->month - 1;

   if (minutes < 0 && hour > 0)
   {
      minutes += 60;
      hour--;
   }

   if (hour < 0 && day <= 0)
   {
      hour = abs(hour + 1);
      minutes -= 60;
   }
   if (hour < 0 && day > 0)
   {
      hour += 24;
      minutes -= 60;
      day--;
   }

   if (year > 0 || (year < 0 && month > 0))
      year++;
   if (year < 0 && month < 0)
   {
      year++;
      month += 12;
   }

   if (day < 0 && month > 0)
   {
      day+=difMonth;;

      month--;
   }

   printf("Time difference:\n hours:%d\n minutes:%d\n days:%d\n months%d\n years:%d", abs(hour), abs(minutes), abs(day), abs(month), abs(year));
}