#include <stdio.h>

int main() {
    int l,b,perimeter,area;
    scanf("%d %d",&l,&b);
    perimeter=2*(l+b);
    area=l*b;
    printf("%d %d",perimeter,area);
    return 0;
}