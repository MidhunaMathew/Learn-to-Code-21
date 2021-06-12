/* */
#include <stdio.h>
int main(int reading)
int main()
{
    int p1,p2,new;
    printf("Enter the previous reading");
    scanf("%d",&p1);
    printf("Enter the present reading");
    scanf("%d",&p2);
    new=p2-p1;
    reading(new);
    return 0;
}
