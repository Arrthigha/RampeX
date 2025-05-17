#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d Is an Even number",n);
    }
    else
    {
        printf("%d Is a Odd number",n);

    }
}