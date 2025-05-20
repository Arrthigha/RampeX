#include<stdio.h>
#include<math.h>
int x,y;
int power(int x,int y)
{
    return pow(x,y);
}
int main()
{
    printf("Enter the value : ");
    scanf("%d",&x);
    printf("Enter the power value : ");
    scanf("%d",&y);
    printf("%d",power(x,y));
    return 0;
}