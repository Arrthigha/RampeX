#include<stdio.h>
void greet(char a[],char b[])
{
    printf("Hello %s, Welcome to TCS as a %s",a,b);
}
int main()
{
    char name[20],dept[20];
    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter the department : ");
    scanf("%s",dept);
    greet(name,dept);
    return 0;
}