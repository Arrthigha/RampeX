#include<stdio.h>
int fact;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        printf("Factorial of %d is : %d",n,factorial(n));

    }
    return 0;
}
