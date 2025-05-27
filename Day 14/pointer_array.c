#include<stdio.h>
int main(){
    int arr[]={23,56,34,65,34,76};
    int* p=arr;
for(int val=0;val<6;val++){
        printf("The Array value is : %d\n",*(p+val));
        printf("The address of the number is %p\n",arr[val]);
}
    return 0;
}