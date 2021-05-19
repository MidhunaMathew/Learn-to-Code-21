/*Write a C Program to compute the multiplication table of 1 - 5 using do-while.

Input Format

The first line in the input refers to the number whose tables is to be printed.
The second line in the input refers to the closing option inorder to exit the do-while loop.
Constraints

Create a menu with the numbers and the last option being exit inorder to terminate the do-while loop.
The loop will get terminated with the second input.
Output Format

The first six lines refer to the 6 line in the menu.
The seventh line refers to results of the multiplication.
The next six lines refer to the 6 line in the menu.
Sample Input 0

1
6
Sample Output 0

1.Table of 1
2.Table of 2
3.Table of 3
4.Table of 4
5.Table of 5
6.Exit
1 2 3 4 5 6 7 8 9 10
1.Table of 1
2.Table of 2
3.Table of 3
4.Table of 4
5.Table of 5
6.Exit
Sample Input 1

7
6
Sample Output 1

1.Table of 1
2.Table of 2
3.Table of 3
4.Table of 4
5.Table of 5
6.Exit
Enter a valid option!
1.Table of 1
2.Table of 2
3.Table of 3
4.Table of 4
5.Table of 5
6.Exit */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,b,c,i=1;
    scanf("%d%d",&a,&b);
    printf("\n1.Table of 1 \n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
    do
    {
      c=a*i;
      i++;
      if(a>5)
      {
         printf("Enter a valid option!");
         break;
      }
     printf("%d ",c);
     }while(i<=10);

    if(b == 6)
    {
        printf("\n1.Table of 1 \n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
        exit(0);
    }
    return 0;
}
