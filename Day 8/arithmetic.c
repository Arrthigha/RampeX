#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int mod(int a,int b)
{
    return a%b;
}
int main()
{
    int x,y;
    printf("Enter the First Value : ");
    scanf("%d",&x);
    printf("Enter the Second Value : ");
    scanf("%d",&y);
    printf("Addition of the given values : %d\n",add(x,y));
    printf("Subtraction of the given values : %d\n",sub(x,y));
    printf("Multiplication of the given values : %d\n",mul(x,y));
    printf("Division of the given values : %d\n",div(x,y));
    printf("Modulus of the given values : %d\n",mod(x,y));
    return 0;
} 