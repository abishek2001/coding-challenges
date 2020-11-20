#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
     char* abc[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  
 for(int n = a;n<=b;n++)
    {
        if(n>9)
        {
            if(n%2 ==0)
               printf("even\n");
            else {
            printf("odd\n");
            }   
        }
        else {
          puts(abc[n]);
        }
    }
    return 0;

}

