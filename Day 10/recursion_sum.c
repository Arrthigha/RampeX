#include <stdio.h>

int sum(int n,int total)
{

    if(n==0)
        return total;
    else
    {
        return sum(n/10,total+n%10);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sum(num,0));
    return 0;
}