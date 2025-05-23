#include<stdio.h>
int number(int n)
{
    if(n>1)
    {
        printf("%d ",n);
        return number(n-1);
    }
}
int main()
{
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    printf("%d",number(n));
    return 0;
}