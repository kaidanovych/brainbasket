#include <stdio.h>
#include <cs50.h>

int main (void)
{
   int minutes, bottles;
   printf ("How long was your shower?\n");
   printf("minutes: ");
   minutes = GetInt();
  
   if (minutes > 0)
   {
       bottles = minutes * 12;
       printf ("bottles: %d\n", bottles);
   }
   
   return 0;
 } 
    