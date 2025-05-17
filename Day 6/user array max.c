#include<stdio.h>
int main()
{
    int size;
    int max=0;
    printf("Enter the size of an array : ");
    scanf("%d",&size); 
    int arr[size];
    for(int i=0;i<=size;i++)
    {
    printf("Enter a value : ");
    scanf("%d",&arr[i]); 
    }
    for(int i=1;i<=size;i++)
    {
    if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d ",max);
   return 0;
}
