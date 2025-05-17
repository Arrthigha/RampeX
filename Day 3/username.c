#include<stdio.h>
#include<string.h>
int main()
{
    char username[20], password[20];
    char username1[]="abcde";
    char password1[]="12345";
    printf("Enter the username : ");
    scanf("%s",&username);
    printf("Enter the password : ");
    scanf("%s",&password);
    if(strcmp(username,username1)==0 && strcmp(password,password1)==0)
    {
        printf("Login Successfull");
    }
    else
    {
        printf("Invalid username or password");
    }
    return 0;
}