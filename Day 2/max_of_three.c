#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("Maximum value is %d",a);
    }
    else if(b>a && b>c){
        printf("Maximum value is %d",b);
    }
    else if(c>a && c>b){
        printf("Maximum value is %d",c);
    }
    return 0;
}