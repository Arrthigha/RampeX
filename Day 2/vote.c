#include<stdio.h>
int main(){
    int n,lic;
    printf("Enter your age : ");
    scanf("%d",&n);
    printf("Do you have a license (If yes - 1, if no -0) : ");
    scanf("%d",&lic);
    if(n>=18 && lic==1){
        printf("You are eligible for driving");
    }
    else{
        printf("Not eligible for driving");
    }
    return 0;
}