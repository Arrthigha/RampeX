#include<stdio.h>
int n;
int sum(int n)
{
    int digit,sum;
     while (n != 0) {
        digit = n % 10;     
        sum += digit;         
        n /= 10;            
    }
    printf("Sum of digits : %d\n", sum);
    return sum;
}
int main()
{
    printf("Enter a number : ");
    scanf("%d", &n);
    sum(n);
    return 0;
}
