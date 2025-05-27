#include<stdio.h>
int main(){
    int limit;
    printf("SET SIZE: ");
    scanf("%d",&limit);
    int n=limit*2-1;
    int arr[n][n];
    for(int layer=0;layer<n;layer++){
        //top
        for(int col=layer;col<n-layer;col++){
            arr[layer][col]=limit;
        }
        //right
        for(int row=layer+1;row<n-layer;row++){
            arr[row][n-1-layer]=limit;
        }
        //bottom
        for(int col=n-1-layer;col>layer;col--){
            arr[n-1-layer][col]=limit;
        }
        //left
        for(int row=n-1-layer;row>layer;row--){
            arr[row][layer]=limit;
        }
        limit--;
    }
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            printf("%d ",arr[row][col]);
        }
        printf("\n");//escape sequence
    }
    return 0;
}