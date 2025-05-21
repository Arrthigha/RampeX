#include<stdio.h>
int sum=0,n;
int divisor(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    printf("Enter a number: ");     
    scanf("%d", &n);
    divisor(n);
    printf("\nSum of divisors: %d\n", sum);
    return 0;
}