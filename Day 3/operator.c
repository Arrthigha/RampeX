#include<stdio.h>
int main(){
    char op,result;
    int a=5, b=6;
    printf("Enter the Operator : ");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
        result=a+b;
        printf("Result : %d",result);
        break;
        case '-':
        result=a-b;
        printf("Result : %d",result);
        break;
        case '*':
        result=a*b;
        printf("Result : %d",result);
        break;
        case '/':
        result=a/b;
        printf("Result : %d",result);
        break;
        case '%':
        result=a%b;
        printf("Result : %d",result);
        break;
        default:
        printf("Invalid Operator");
    }
    return 0;
}