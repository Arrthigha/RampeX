/*program for relational operators*/ 
#include<stdio.h>
int main(){
int a,b;
printf("Enter two values : ");
scanf("%d %d",&a,&b);
printf("Operands : \n a=%d and b=%d\n",a,b);
printf("a==b : %d\n",a==b);
printf("a!=b : %d\n",a!=b);
printf("a>b : %d\n",a>b);
printf("a>=b : %d\n",a>=b);
printf("a<b : %d\n",a<b);
printf("a<=b : %d\n",a<=b);
return 0;
}