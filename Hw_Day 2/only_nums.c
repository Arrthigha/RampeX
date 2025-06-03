#include<stdio.h>
int main(){
    int sum=0,i=0;
    char str[50];
    printf("Enter a String : ");
    fgets(str,sizeof(str),stdin);
     while(str[i]!='\0' && str[i]!='\n')
     {
        if (str[i] >= '0' && str[i] <= '9')
        sum+=1;
        i++;
     }
     printf("Number of the digits in the string : %d",sum);
     return 0;
}