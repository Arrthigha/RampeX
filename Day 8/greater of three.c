#include<stdio.h>
int max(int a,int b,int c)
{
    if(a>b && a>c)
    {
        printf("%d is the greatest value",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the greatest value",b);
    }
    else if(c>a && c>b)
    {
        printf("%d is the greatest value",c);
    }
    return a,b,c;
}
int main()
{
    int a,b,c;
    printf("Enter three values :\n");
    scanf("%d %d %d",&a,&b,&c);
    max(a,b,c);
    return 0;
}