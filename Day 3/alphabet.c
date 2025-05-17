#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%d",&ch);
    if(ch>'A' && ch<'Z')
    {
        printf("%c is a Uppercase character");
    }
    else if(ch>'a' && ch<'z')
    {
                printf("%c is a Lowercase character");
    }
    else{
        printf("Invalid Value");
    }
    return 0;
}