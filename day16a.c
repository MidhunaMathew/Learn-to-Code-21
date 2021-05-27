/*Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each ouccurence of that element with its position(s).

Input Format

First line specifies the no: of rows (m) and and the no: of columns (n) in the 2D Array.
Second line contains m*n integers that signify the values for the array.
Third line specifies the element to be searched for.
Constraints

Always make sure that your output has the same spacings as mentioned.

Output Format

If element found, print "Element found at (row,column)".
If not found, then print "Element not found".
Sample Input 0

2 3
6 1 4 8 2 1 
8
Sample Output 0

Element found at (1,0)
Explanation 0

The given matrix would be,

6 1 4
8 2 1
Element '8' is at the (1,0) position

Sample Input 1

3 2
1 6 3 2 5 6
0
Sample Output 1

Element not found
Explanation 1

The given matrix is,

1 6 
3 2
5 6
The element '0' does not exist in this matrix. */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int m,n,i,j,a[20][20],k;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);      
        }
    }
    scanf("%d",&k);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==k)
            {
                printf("Element found at (%d,%d)",i,j);
                return 0;
            }
        }
    }   
    printf("Element not found");
    return 0;
}
