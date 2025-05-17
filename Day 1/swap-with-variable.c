#include<stdio.h>
int main()
{
    int a,b,t;
    a=5;
    b=3;
    t=a;
    a=b;
    b=t;
    printf("a,b,t : ",a,b,t);
    return 0;
}