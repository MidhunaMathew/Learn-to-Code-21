/*Write a C program that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).

Input Format

The input will be 4 lines of student details arranged as-

<rollno> <firstname> <marks>

Constraints

0 < rollno <= 100
0.00 < marks <= 100.00
Recommend using '%s' in scanf for 'firstname'.
Float value upto 2 decimals
Output Format

Display all details as -

DETAILS OF ROLLNO <rollno>
NAME: <firstname>
MARKS: <marks>
Sample Input 0

1 Popeye 100
2 Bheem 100
3 Tom 60
4 Bean 80
Sample Output 0

DETAILS OF ROLLNO 1
NAME: Popeye
MARKS: 100.00
DETAILS OF ROLLNO 2
NAME: Bheem
MARKS: 100.00
DETAILS OF ROLLNO 3
NAME: Tom
MARKS: 60.00
DETAILS OF ROLLNO 4
NAME: Bean
MARKS: 80.00
Explanation 0

The first student is 'Popeye' - Rollno = 1, Marks = 100.00

            (FYI: I hear he comes to school in a boat!)
The Second student is 'Bheem' - Rollno = 2, Marks = 100.00

            (FYI: I would not reccomend giving him a ladoo!)
The third student is 'Tom' - Rollno = 3, Marks = 60.00

            (FYI: I always see him in a chaotic battle with tiny Jerry!)
The fourth student is 'Bean' - Rollno = 4, Marks = 80.00

            (FYI: I always see him with his teddy bear!)*/

#include <stdio.h>
struct student 
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    int i;
    struct student s[10];
    for(i=0;i<4;i++)
    {
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }
    for (i = 0; i<4;i++) 
    {
        printf("DETAILS OF ROLLNO %d\n",s[i].roll);
        printf("NAME: %s\n",s[i].name);
        printf("MARKS: %.2f", s[i].marks);
        printf("\n");
    }
    return 0;
}
