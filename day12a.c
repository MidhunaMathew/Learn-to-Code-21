/*Write a C program to read n values from the user and store it in the array. Reprint the values stored in the array and also print the value of second element in the array.

Input Format

First input represents the number of values storing in the array
Represent the values to be stored in the array
Constraints

None

Output Format

The first line contains the values stored in the array.
The second line contains the value of second element.
Sample Input 0

5
3
5
8
9
2
Sample Output 0
Entered array: 3 5 8 9 2
5 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int  arr[20],i,n;
    scanf("%d",&n);
    printf("Entered array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    printf("\n%d",arr[1]);
    return 0;
}

