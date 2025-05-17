
#include <stdio.h>

int main() {
    int a,b,add,sub,mul,mod;
    float divisor;
    printf("Enter a value for a : ");
    scanf("%d",&a);
     printf("Enter a value for b : ");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    divisor=a/b;
    mod=a%b;
    printf("\nAddition :%d\n Subtraction :%d\n multiplication :%d\n Division :%.2f\n Modulus :%d",add,sub,mul,divisor,mod);
    return 0;
}