#include<stdio.h>
int main()
{
    int arr[10];
    int sum=0, avg;
    printf("Enter a value : ");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&arr[i]); 
       sum+=arr[i];
        avg=sum/5;
    } 
    printf("Sum of the given numbers : %d\n",sum) ;
    printf("Average of the given numbers : %d",avg) ;
   return 0;
}
