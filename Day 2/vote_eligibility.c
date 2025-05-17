#include<stdio.h>
int main(){
int a,b=18;
printf("Enter the age : ");
scanf("%d",&a);
printf("if 0 not eligible\nif 1 eligible\n");
printf("your age is %d so your eligibility for voting : %d\n",a,a>=b);
return 0;
}