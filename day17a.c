/*Write a C Program to arrange the elements in ascending order.

Input Format

The first line of input specifies the size of the array.
The second line of the input refers to the elements of the array.
Constraints

None

Output Format

The output refers to the array after sorting
Sample Input 0

3 
12 -2 0
Sample Output 0

-2 0 12
Sample Input 1

5
7 9 3 2 -10
Sample Output 1

-10 2 3 7 9 */

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
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
