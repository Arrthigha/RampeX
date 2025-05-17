#include <stdio.h>

int main()
{
    int a ,b;
    printf("Enter a value for a : ");
    scanf("%d",&a);
    printf("Enter a value for b : ");
    scanf("%d",&b);
    if (a > b)
        printf("a is greater than b\n");
    else
        printf("a is less than or equal to b\n");
    if (a >= b)
        printf("a is greater than or equal to b\n");
    else
        printf("a is lesser than b\n");
    if (a < b)
        printf("a is less than b\n");
    else
        printf("a is greater than or equal to b\n");
    if (a <= b)
        printf("a is lesser than or equal to b\n");
    else
        printf("a is greater than b\n");
    if (a == b)
        printf("a is equal to b\n");
    else
        printf("a and b are not equal\n");
    if (a != b)
        printf("a is not equal to b\n");
    else
        printf("a is equal b\n");

    return 0;
}