/*Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.

Input Format

The first line of the input refers to the length any side of a square.
The second line of the input refers to the radius of the circle.
The third line of the input refers to the base and height of a triangle.
Constraints

Area of a circle will return a float value since pi takes the value of 3.14 which is a float value.
Area of a triangle will return a float value due to the presence of 0.5 in the equation.
Output Format

The first line of the output displays the area of the square.
The second line of the output displays the area of the circle.
The third line of the output displays the area of the triangle.
Sample Input 0

6
4
3 4
Sample Output 0

36
50.2
6.00 */
#include <stdio.h>
int main() 
{
    int a,r,l,b;
    scanf("%d%d%d%d",&a,&r,&l,&b);
    printf("%d\n",a*a);
    printf("%.1f\n",3.14*r*r);
    printf("%.2f\n",0.5*l*b);
    return 0;
}
