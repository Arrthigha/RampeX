
#include <stdio.h>

int main() {
    int a,sq,cube;
    printf("Enter a value for a : ");
    scanf("%d",&a);
    sq=a*a;
    cube=a*a*a;
    printf("Square of value %d is %d\n",a,sq);
    printf("Cubic of value %d is %d",a,cube);
    return 0;
}