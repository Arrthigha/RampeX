#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,vowels=0;
    char str[50],ch,str2[50];
    printf("Enter a String : ");
    fgets(str,sizeof(str),stdin);
    while(str[count]!='\0' && str[count]!='\n')
    {
        ch=tolower(str[count]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            str2[count]=' ';
        else
            str2[count] = str[count];
        count++;
    }
    str2[count] = '\0';
    printf("Modified String : %s",str2);
    return 0;
    }
