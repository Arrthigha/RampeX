#include <stdio.h>
int main() {
    int n,sum=0,a,dig,val=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        sum+=a;
        n/=10;
    }
    while(sum!=0)
    {
        dig=sum%10;
        val+=dig;
        sum/=10;
    }
    printf("%d",val);
    return 0;
}