#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Chapter 3,Qtn 2.18
   float highest_ever,current_rain;
   printf("Enter the highest rainfall ever recorded in one season for a country:\n");
   scanf("%f",&highest_ever);

   printf("Enter current year rainfall:\n");
   scanf("%f",&current_rain);

   if(current_rain>highest_ever)
   {
       printf("The new highest rainfall is: %f",current_rain);
   }
   else
   {
       printf("The existing highest rainfall: %f still stands",highest_ever);
   }
    return 0;
}
