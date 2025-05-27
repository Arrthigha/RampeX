#include<stdio.h>
int main(){
    int arr[]={3,9,8,4,7};
    int *start=arr;
    int *end=arr+4;
    while(start<end)
    {
    int temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;
    }
    for(int val=0;val<5;val++)
    {
        printf("%d ",arr[val]);
    }
return 0;
}