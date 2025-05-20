#include<stdio.h>
int digit,rev,n;
int reverse(int n)
{
    while(n!=0)
    {
    digit=n%10;
    rev=rev*10+digit;
    n/=10;
    }
    return rev;
}
int main()
{
    printf("Enter a value : ");
    scanf("%d",&n);
    printf("The reverse value if %d is %d",n,reverse(n));
    return 0;
}