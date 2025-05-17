#include <stdio.h>
int main() {
    int sum = 0;
    {
    for(int i=2;i<=50;i+=2)
    {
        sum+=i;
    }
    printf("Sum of the even numbers between 1 - 50 is : %d",sum);
    }
    return 0;
}