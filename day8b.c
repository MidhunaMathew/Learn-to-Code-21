/*Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.

Input Format

The first line of input refers to the option number corresponding to the operation on the menu.
The second line of input refers to the two numbers to perform the operation.
Constraints

Usage of float datatype for division.
Output Format

The first line of output refers to the 1st item in the menu.
The second line of output refers to the 2nd item in the menu.
The third line of output refers to the 3rd item in the menu.
The fourth line of output refers to the 4th item in the menu.
The fifth line of the output refers to the result after the operation.
Sample Input 0

3
2 3
Sample Output 0

1.Addition
2.Subtraction
3.Multiplication
4.Division
6
Sample Input 1

4
5 0 
Sample Output 1

1.Addition
2.Subtraction
3.Multiplication
4.Division
Cannot be determined
Sample Input 2

4
25 10
Sample Output 2

1.Addition
2.Subtraction
3.Multiplication
4.Division
2.5 */

#include <stdio.h>

int main() {
    int a,b,c,s,d,p;
    float div;
    scanf("%d%d%d",&a,&b,&c);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    s = b+c;
    d = b-c;
    p = b*c;
    div = b/(float)c;
    
    switch(a)
    {
        case 1: printf("%d",s);
            break;
        case 2: printf("%d",d);
            break;
        case 3: printf("%d",p);
            break;
        case 4:
            {
                if(c == 0)
                    {
                       printf("Cannot be determined"); 
                    }
                else
                   {
                       printf("%.1f",div);
                   }
            }
            break;
    }
    return 0;
}
