#include<stdio.h>
int main(){
    int n;
    printf("Enter your age : ");
    scanf("%d",&n);
    if(n>=18 && n<=56){
        printf("your age is %d you are eligible for voting");
        return 0;
    }
}