/*Write a C program to print inverted full pyramid of *

Input Format

First line specifies the no: of rows needed in the Array.
Constraints

if no(rows)<1, print 'ERROR'.
A Variable for SPACE.
Output Format

An inverted pyramid pattern of * will be obtained with respect to the number of rows.

Sample Input 0

5
Sample Output 0

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
Sample Input 1

-3
Sample Output 1

ERROR */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,j,r,sp;
    scanf("%d",&r);
    if(r<1)
    {
        printf("ERROR");
    }
    else
    {
        for(i=r;i>=1;i--)
        {
            for (sp=0; sp<r-i; sp++)
            {
                printf("  ");
            }    
            for (j=i; j<=2*i-1;j++)
            {  
                printf("* ");
            }
            for (j = 0; j<i- 1;j++)
            {
             printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
