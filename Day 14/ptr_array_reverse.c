#include<stdio.h>
int main(){
    int arr[]={23,56,34,65,34,76};
    int* p=&arr[5];
for(int val=6;val>0;val--){
        printf("The Array value is : %d\n",*p);
        printf("The address of the number is %p\n",arr[val]);
        p--;
}
    return 0;
}