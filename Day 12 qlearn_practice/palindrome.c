#include <stdio.h>

int main() {
    int n,org,rev=0;
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    if(rev==org)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}