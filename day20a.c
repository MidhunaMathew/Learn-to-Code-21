/*Write a C program to check whether a given number is amstrong or not.

Note: Amstrong numbers are numbers that are equal to sum of cubes of its digits.

  Eg: 153 is an amstrong number.
       153 = 1³+5³+3³
Input Format

Input a number.

Constraints

Use the concept of functions in C.

Output Format

Depends on the input.

Sample Input 0

153
Sample Output 0

Amstrong
Sample Input 1

100
Sample Output 1

Not Amstrong */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int amstrong(int n)
{
    int r,num,result=0;
    num = n;
    while (num!= 0) 
        {
        r= num%10;
        result = result+r*r*r;
        num = num/10;
        } 
    if(n==result)
    {
        printf("Amstrong");
    }
    else
    {
        printf("Not Amstrong");
    }
    return 0;
}
int main() 
{    
    int n;
    scanf("%d",&n);
    amstrong(n);
    return 0;
}
