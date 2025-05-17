#include<stdio.h>
int main(){
    int n,res;
    printf("Enter a value : ");
    scanf("%d",&n);
    if(n>0)
    {
        res=1;
    }
    else if(n<0)
    {
        res=-1;
    }
    else if(n==0)
    {
         res=0;
    }
    else
    {
       res=2;
    }
    switch(res)
    {
        case 1:
        printf("%d is a Positive number",n);
        break;
        case -1:
        printf("%d is a Negative number",n);
        break;
        case 0:
        printf("%d is a Zero",n);
        break;
        case 2:
        printf("Invalid value");
        break; 
    }
    return 0;
}