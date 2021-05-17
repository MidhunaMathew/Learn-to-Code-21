/*WACP to determine if a triangle is valid from the given sides.

Input Format

The only line in the input refers to the three sides of a triangle.
Constraints

The sum of any two sides must be greater than the other.
Output Format

The output contains either a 'Yes' or a 'No' based on the validity of the triangle.
Sample Input 0

6 7 8
Sample Output 0

Yes */
#include <stdio.h>
int main() 
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a+b > c)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
