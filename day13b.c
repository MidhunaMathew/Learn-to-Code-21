/*Write a C program to find the frequency of odd and even numbers in the 1D array.

Input Format

The first input value represents the number of elements in the array.
The other inputs represents the values to be stored in the array.
Constraints

Use integer array.

Output Format

First output value represents the frequency of even numbers.
Second output value represents the frequency of odd numbers.
Sample Input 0

4
12
11
15
17
Sample Output 0

1
3 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int  arr[20],i,n,c=0,a=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);    
     }
    for(i=0;i<n;i++)
    {
     if(arr[i] % 2 == 0)
        {
            c=c+1;
        } 
     else
       {
         a=a+1;
       }
    }
    printf("%d\n",c);
    printf("%d",a);
    return 0;
}
