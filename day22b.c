/*Write a C program to find the number of prime numbers in a array of integers

Input Format

First line contains n, the size of the array
Second line contains n integers seperated by spaces
Constraints

0 < n <= 100
1 < arr[i] < 100
Output Format

Number of prime numbers in the array

Sample Input 0

5
2 3 4 5 7
Sample Output 0

4
Sample Input 1

2
4 8
Sample Output 1

0 */

#include <stdio.h>
int main() 
{
    int n,arr[100],i,c=0,j,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i<n;i++) {
       j = 2;
       p = 1;
       while (j<arr[i]) 
       {
           if (arr[i]%j == 0) 
           {
               p = 0;
               break;
           }
           j++;
       }
       if (p == 1)
       {
           c=c+1;
       }
   }

    printf("%d",c);
    return 0;
}
