/* Write a C Program to display each day of the week using switch case.

Input Format

The input refers to the nth day of the week.
Constraints

Consider the week as Sunday to Saturday
Output Format

The output refers to the day corresponding to it's postion in the week.
Sample Input 0

6
Sample Output 0

Friday
Sample Input 1

9
Sample Output 1

Error */
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("Sunday");
            break;
        case 2: printf("Monday");
            break;
        case 3: printf("Tuesday");
            break;               
        case 4: printf("Wednesday");
            break;
        case 5: printf("Thursday");
            break;                
        case 6: printf("Friday");
            break;
        case 7: printf("Saturday");
            break;
        default: printf("Error");
            break;
    }
    return 0;
}
