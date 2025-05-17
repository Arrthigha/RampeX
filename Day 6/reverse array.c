#include<stdio.h>
int main()
{
       int arr[]={1,2,3,4,5};
    printf("{");
    for(int i=4;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
        printf("}");
    return 0;
}