#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[50],ispalindrome=1;
    int left=0,right,length=0;
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    while(str[length]!='\0' && str[length]!='\n'){
    length++;
    }
    right=length-1;
    while(left<right){
        if(str[left]!=str[right]){
        ispalindrome=0;
        break;
    }
        left++;
        right--;
    }
    if(str[length]=='\n')
    str[length]='\0';
    if(ispalindrome){
        printf("%s is a palindrome",str);}
    else{
        printf("%s is not a palindrome",str);}
    return 0; 
}