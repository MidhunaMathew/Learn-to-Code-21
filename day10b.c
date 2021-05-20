/*Write a C program to print the following number pattern



The number of rows is given by the user
55555
 4444
  333
   22
    1
This program is similar to floyds triangle

Input Format

The user will input the number of rows

Constraints

1<=N<10

Output Format

Output should be an inverted right triangle of numbers

Sample Input 0

5
Sample Output 0

55555
 4444
  333
   22
    1
Sample Input 1

4
Sample Output 1

4444
 333
  22
   1  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
      for(j=n; j>i; j--)
      {
          printf(" ");
      }
      for(j=1;j<=i;j++)
      {
          printf("%d",i);
      }
      printf("\n");
    }

}
