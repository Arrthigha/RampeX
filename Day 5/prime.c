#include <stdio.h>

int main() {
    int i,num,val=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            val=0;
            break;
        }
    }
    if(val==0 || num<=1)
    {
        printf("%d is not a Prime Number",num);
    }
    else 
    {
        printf("%d is a Prime Number",num);

    }
    return 0;
}
