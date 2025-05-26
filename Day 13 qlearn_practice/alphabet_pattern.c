#include <stdio.h>

int main() {
    int n;
    char alpha;
    scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       alpha='A';
       for(int j=1;j<=i;j++)
       {
           printf("%c",alpha);
           alpha++;
       }
       printf("\n");
   }
    return 0;
}