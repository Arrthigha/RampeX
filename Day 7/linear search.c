#include<stdio.h>
int main()
{
int arr[5]={10,20,30,40,50};
int found=0,i,target=30,val;
for(i=0;i<5;i++)
{
    if(arr[i]==target)
    {
        found=1;
        val=i;
    }
}
if(found)
{
    printf("Target found at position %d",val);
}
else
{
        printf("Target not found.");
}
return 0;
}