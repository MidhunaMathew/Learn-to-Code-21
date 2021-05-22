/*myarray[10] ={10,25,8,14,3,23,1,0,12,9} Write a C program to

      1) Print the value of 4th element.
      2) Print the value of last element in the array.
      3) Change the value of third element to 30 and print the new value.
      4) Print all the elements stored in the new array.
Input Format

None

Constraints

None

Output Format

The first line contains the value of 4th element.
The second line contains the value of last element in the array.
The third line contains the new value of third element.
The fourth line contains the values of all elements stored in the new array separated by a space.
Sample Output 0

14
9
30
10 25 30 14 3 23 1 0 12 9 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,myarray[10] ={10,25,8,14,3,23,1,0,12,9};
    printf("%d\n%d\n",myarray[3],myarray[9]);
    myarray[2]=30;
    printf("%d\n",myarray[2]);
    for (i=0;i<10;i++)
    {
        printf("%d ",myarray[i]);
    }
    return 0;
}
