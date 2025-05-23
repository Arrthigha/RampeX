#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two values : ");
    scanf("%d %d",&a,&b);
    int *x=&a;
    int *y=&b;
    int sum=*x+*y;
    printf("Address of a: %p\n", &a);         
    printf("Address of a: %p\n", &b);
    printf("Value of x: %p\n", x);
    printf("Value of y: %p\n", y);
    printf("Value pointed to by x: %d\n", *x);
    printf("Value pointed to by y: %d\n", *y);
    printf("Addition of %d and %d is %d",a,b,sum);
    return 0;
}