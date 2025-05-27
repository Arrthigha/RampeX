#include<stdio.h>
int main(){
    char word[40];
    int count=0;
    printf("Enter a string : ");
    fgets(word,sizeof(word),stdin);
    while(word[count]!='\0' && word[count]!='\n')
    {
        count++;
    }
    printf("%d",count);
    return 0;
}