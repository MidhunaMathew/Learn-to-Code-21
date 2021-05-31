/*Write a C program to print half pyramid of numbers

Input Format

First line specifies the no: of rows needed in the Array.
Constraints

if no(rows)<1, print 'ERROR'. Each row should start with '1'.

Output Format

A pyramid pattern of numbers will be obtained with respect to the number of rows.

Sample Input 0

5
Sample Output 0

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,j,r;
    scanf("%d",&r);
    if(r<1)
    {
        printf("ERROR");
    }
    else
    {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}
