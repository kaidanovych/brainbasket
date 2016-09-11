#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)

{

int number_of_coins = 0;
float cash;
      
      do 
         {
          printf ("how much change is owed:");
          cash = GetFloat();
         }
         
      while (cash < 0);
       
    int coins = cash * 1000 / 10;
    
    int quarters = coins / 25;
    int quarter_L = coins % 25;
    
    int dimes = quarter_L / 10;
    int dimes_L = quarter_L % 10;
    
    int nickels = dimes_L / 5;
    int nickels_L = dimes_L % 5;
    
    int pennys = nickels_L / 1;
         
    {
     printf("%d\n", number_of_coins = quarters + dimes + nickels + pennys);
    }

  return 0;
  
}