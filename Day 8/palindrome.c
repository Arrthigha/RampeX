#include<stdio.h>
int digit,rev=0,n;
int palindrome(int n)
{
    int org=n;
    while(n>0)
    {
    digit=n%10;
    rev=rev*10+digit;
    n/=10;
    }
    if(org==rev)
    {
        printf("The given number is palindrome.");
    }
    else{
        printf("The given number is not palindrome.");
    }
    return 0;
}
int main()
{
    printf("Enter a value : ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}