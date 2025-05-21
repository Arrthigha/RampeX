#include<stdio.h>
int arr[10][10],a,b;
void get()
{
    printf("Enter the row value : ");
    scanf("%d",&a);
    printf("Enter the column value : ");
    scanf("%d",&b);
}
void mat(int a, int b)
{
for(int i=0;i<a;i++)
{
    for(int j=0;j<b;j++)
    {
    printf("Enter the value for arr[%d][%d] : ",i,j);
    scanf("%d",&arr[i][j]);
    }
}
}
void display()
{
    printf("\nThe %d X %d array is:\n",a,b);
    for(int i=0;i<a;i++)
    {
    for(int j=0;j<b;j++)
    {
    printf("%d ",arr[i][j]);
    }
    printf("\n");
}
}
int main()
{
    get();
    mat(a,b);
    display();
    return 0;
}
