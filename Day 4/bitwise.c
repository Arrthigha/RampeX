#include<stdio.h>
int main()
{
    int a=1010, b=1111, c=101;
    printf("AND : %d\n",a&b);
    printf("OR  : %d\n",a|b);
    printf("NOT of a : %d\n",~c);
    printf("XOR : %d\n",a^b);
    return 0;
}