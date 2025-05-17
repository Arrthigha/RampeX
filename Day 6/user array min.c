#include<stdio.h>
int main()
{
    int arr[5]={1,3,6,8,5};
    int min;
    for(int i=0;i<5;i++)
    {
    if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d ",min);
   return 0;
}
