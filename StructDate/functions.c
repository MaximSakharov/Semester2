#include <stdio.h>
#include "structDate.h"
#include "dateFunctions.h"
#include <stdlib.h>
#include "functions.h"

int DaysInMonth(const int month_, Date* date)
{
   if (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12)
      return 31;
   else if (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11)
      return 30;
   else if (month_ == 2)
      if (LeapYear(date))
         return 29;
      else
         return 28;
   else
      return -1; 
}

