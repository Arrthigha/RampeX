#include<stdio.h>
int result=1;
int power(int n,int p)
{
    for(int i=1;i<=p;i++)
    {
        result*=n;
    }
    return result;
}
int main()
{
    int n,p;
    printf("Enter the value : ");
    scanf("%d",&n);
    printf("Enter the power value : ");
    scanf("%d",&p);
    printf("%d",power(n,p));
    return 0;
}