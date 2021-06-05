/*Write a C program to find the second maximum element in an array of integer elements

Input Format

First line contains an integer n the size of the array
Second line contains the n space seperated integers
Constraints

2 < n <= 100
-100 <= arr[i] <= 100
in no case the n integers are the same
Output Format

The second maximum element in the array

Sample Input 0

2
-5 10
Sample Output 0

-5
Sample Input 1

5 
5 5 5 4 5
Sample Output 1

4 */

 #include <stdio.h>
#include<limits.h>
int main()
{
    int n,arr[100],i,l1,l2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l1=l2=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(arr[i]>l1)
        {
            l2 =l1;
            l1=arr[i];
        }
        else if(arr[i]>l2 &&arr[i]<l1) 
        {
            l2=arr[i];
        }
    }
    printf("%d",l2);
    return 0;
}
