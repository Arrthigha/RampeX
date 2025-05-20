#include<stdio.h>
int val,num;
int prime(int n)
{
    int isprime=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime)
    {
        printf("%d is a Prime Number",num);
    }
    else 
    {
        printf("%d is not a Prime Number",num);
    }
    return num;
}
int main()
{
    printf("Enter a value : ");
    scanf("%d",&num);
    prime(num);
    return 0;
}
