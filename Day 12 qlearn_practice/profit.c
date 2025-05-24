#include <stdio.h>

int main() {
    int w,x,y,rev,cost;
    scanf("%d %d %d",&w,&x,&y);
    rev=w*x;
    cost=(w*y)+100;
    printf("%d",rev-cost);
    return 0;
}