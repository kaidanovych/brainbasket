#include <stdio.h>
#include <cs50.h>

int main(void)

{

 int h = 0;


    do 
   {
    printf ("Height:");
    h = GetInt();

    if (h == 0)
      {
        return 0;
      }
   }
   
    while (h < 1 || h > 23);
    
    for (int r = 0; r < h; r++)
    {
        for (int space = 0; space < h - r - 1; space++)
        {
           printf (" ");
        } 
      
        for (int hash = 0; hash < r + 2; hash++)
        {
         printf("#");
        }
     
        {
            printf ("\n");
        }
     
    }
     
 
        
        
    return 0;
}