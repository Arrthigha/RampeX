#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n],odd=0,even=0;
    printf("Enter the values for array : ");
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Even Numbers : ");
    for(int val=0;val<=n;val++)
    {
    if(arr[val]%2==0){
        printf("%d ",arr[val]);
        even++;
    }
}
printf("\nOdd value : ");
for(int val=0;val<=n;val++){
    if(arr[val]%2!=0){
        printf("%d ",arr[val]);
        odd++;
    }
}
printf("\nNumber of odd numbers in array : %d\n",odd);
printf("Number of even numbers in array : %d",even);
return 0;
}