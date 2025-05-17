#include<stdio.h>
int main()
{
    int arr[10];
    int sum=0;
    printf("Enter a value : ");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&arr[i]); 
       sum+=arr[i];
    } 
    printf("Sum of the given numbers : %d",sum) ;
   return 0;
}
