/*Write a C Program to find the maximum and minimum from three user inputted numbers.

Input Format

The input consists of three numbers to make the identification on.
Constraints

Use the IF Statement.
DO NOT USE IN-BUILT FUNCTIONS.
Output Format

The first line of output refers to the maximum element from the list.
The second line of output refers to the minimum element from the list.
Sample Input 0

77 91 23
Sample Output 0

91
23
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        {
        printf("%d\n",a);
        }
     else if(b>c)
        {
        printf("%d\n",b);
        }
     else
        {
        printf("%d\n",c);
        }
     if(a<b && a<c)
        {
        printf("%d\n",a);
        }
     else if(b<c)
        {
        printf("%d\n",b);
        }
     else
        {
        printf("%d\n",c);
        }            
    return 0;
}
