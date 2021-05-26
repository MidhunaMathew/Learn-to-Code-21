/*Write a C Program to read a 2D Array and then display it.

Input Format

First line specifies the no: of rows (m) and and the no: of columns (n) in the 2D Array.
Second line contains m*n integers that signify the values for the array.
Constraints

None

Output Format

2D array of m*n integers.

Sample Input 0

2 3
6 3 7 1 4 5
Sample Output 0

6 3 7
1 4 5
Explanation 0

Given it has order 2*3. So, 2 rows and 3 columns. So,

position [0,0] has value 6.
position [0,1] has value 3.
position [0,2] has value 7.
position [1,0] has value 1.
position [1,1] has value 4.
position [1,2] has value 5. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int m,n,i,j,a[20][20];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);           
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);       
        }
        printf("\n");
    }
     
    return 0;
}
