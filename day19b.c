/*Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.

Input Format

Input two numbers.

Constraints

Use the concept of functions in C for reversing and primechecking.

Output Format

First line refers to sum of two numbers.

Second line depends on the operations.

Sample Input 0

10 14
Sample Output 0

24
42
Sample Input 1

5 8
Sample Output 1

13
Prime
Sample Input 2

15 10
Sample Output 2

25
Not prime  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int a,int b)
{
    int s=0,r,rev=0,c=0,i;
    s=a+b;   
    if(s%2==0)
    {
        printf("%d\n",s);
        while (s!= 0) 
        {
        r= s%10;
        rev=rev*10+r;
        s = s/10;
        } 
        printf("%d",rev);
    }
    else
    {
          printf("%d\n",s);       
         for (i = 2; i<=s/2;i++) 
         {
             if (s%i==0) 
             {
                c = 1;
                break;
             }
         } 
         if(c==1)
         {
             printf("Not prime");
         }
         else
         {
            printf("Prime"); 
         }

    }
    return 0;
}
int main() 
{
    int a,b;
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
