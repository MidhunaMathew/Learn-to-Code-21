/*Write a C program to find the factorial of a given number using a recursive function

Input Format

An integer

Constraints

Use the concept of recursion to solve the problem

Output Format

Prints the factorial of a valid input number else prints ERROR

NB: a valid input number is greater than or equal to 0

Sample Input 0

5
Sample Output 0

120
Sample Input 1

7
Sample Output 1

5040  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int factorial(int n)
{
   int f=1,i;
   if( n<0)
   {
       printf("ERROR");
   }
   else if(n==0)
   {
       printf("1");
   }
    else
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        printf("%d",f);
    }
    return 0;
}
int main() 
{
    int n;
    scanf("%d",&n);
    factorial(n);    
    return 0;
}
