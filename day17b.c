/*Write a C program to find the minimum and maximum element of an array.

Input Format

The first line of input refers to the size of the array.
The second line of input refers to the elements of the array.
Constraints

None

Output Format

The first line of the output refers to the smallest element in the array.
The second line of the output refers to the largest element in the array.
Sample Input 0

5
7 9 4 2 1
Sample Output 0

1
9 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,a[40],i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("%d\n",a[0]);
    printf("%d\n",a[i]);
    return 0;
}
