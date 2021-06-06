/*Write a C Program to read an array, then display the array twice. Once using the index, and the other time using the array pointer.
Input Format
The first line contains the length(n) of the array.
The second line contains 'n' integers as the elements of the array.
Constraints
0 < array length <= 100
1 < arr[i] < 100
First array should be made with indexes.
Second arrayy should be made using the array pointer.
Output Format
Both the lines display the appropriate message with the array.
DISPLAYING USING INDEX:
DISPLAYING USING POINTERS:
Sample Input 0
5
7 3 5 2 3
Sample Output 0
DISPLAYING USING INDEX: 7 3 5 2 3
DISPLAYING USING POINTERS: 7 3 5 2 3 */
#include <stdio.h>
int main() 
{
    int i,data[200],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d", data+i);
    }
    printf("DISPLAYING USING INDEX: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
    printf("DISPLAYING USING POINTERS: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", *(data+i));
    }
    
    return 0;
}
