#include<stdio.h>
int sum=0,n;
int divisor(int n)
{
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum+=i;
        }
    }
    if(n==sum)
    {
        printf("\n%d is a Perfect Number.",n);
    }
    else
    {
        printf("\n%d is not a Perfect Number.",n);
    }
}
int main()
{
    printf("Enter a number: ");     
    scanf("%d", &n);
    divisor(n);
    return 0;
}