#include <stdio.h>

int main() {
    int a,b,res,bal,val;
    scanf("%d %d",&a,&b);
    res=a/b;
    val=b*res;
    bal=a-val;
    printf("%d %d",res,bal);
    return 0;
}