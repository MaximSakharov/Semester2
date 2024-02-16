#include <stdio.h>
#include "structDate.h"
#include "dateFunctions.h"
#include <stdlib.h>
#include "functions.h"

/* Есть структура, которая хранит дату и время. Написать функции:
	по двум датам определяет разницу во времени,
	определяет високосный год или нет,
	на вход дата - выводит кол-во прошедших дней с начала года
*/

int main()
{
   Date* date1 = malloc(sizeof(Date));
   if (!date1)
      return NULL;

   Date* date2 = malloc(sizeof(Date));
   if (!date2)
      return NULL;

   printf("Enter first date (day, month, year, hour, minutes): ");
   scanf_s("%d %d %d %d %d", &date1->day, &date1->month, &date1->year, &date1->hour, &date1->minutes);

   printf("Enter second date (day, month, year, hour, minutes): ");
   scanf_s("%d %d %d %d %d", &date2->day, &date2->month, &date2->year, &date2->hour, &date2->minutes);

   if (LeapYear(date1))
      printf("%d is a leap year\n", date1->year);
   else
      printf("%d is not a leap year\n", date1->year);

   printf("%d\n", AmountOfDays(date1));

   TimeDifference(date1, date2);

   free(date1);
   free(date2);

   return 0;
}