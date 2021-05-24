/*Write a C program to check whether a number present in the 1D array or not.

Input Format

The first input value represents the size of the array.
Values stored in the array.
The last input value represents the number to be searched.
Constraints

Use integer array.

Output Format

Print whether the number present in the array or not.
Sample Input 0

4
12
25
32
40
32
Sample Output 0

32 is present in this array
Sample Input 1

3
23
12
45
4
Sample Output 1

4 is not present in this array */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int  arr[20],i,n,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)   
    {
        scanf("%d",&a);
        if(arr[i] == a)
        {
            printf("%d is present in this array",a);
            return 0;;
        }    
     }
    printf("%d is not present in this array",a);
    return 0;
}
