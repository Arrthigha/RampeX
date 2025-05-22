#include<stdio.h>
int arr[2][3][3],sum=0;
void get()
{
    for( int i=0;i<2;i++)
    {
        for( int j=0;j<3;j++)
        {
            for( int k=0;k<3;k++)
            {
                printf("Enter the value for arr[%d][%d][%d] : ",i,j,k);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
}
int mat1()
{
     for( int i=0;i<2;i++)
    {
        printf("\nMatrix %d:\n", i+1);
        for( int j=0;j<3;j++)
        {
            for( int k=0;k<3;k++)
            {
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
        int matrixsum=0;
        for( int j=0;j<3;j++)
        {
            for( int k=0;k<3;k++)
            {
                matrixsum+=arr[i][j][k];
            }
        }
        printf("Sum of the matrix %d : %d\n",i+1,matrixsum);
        sum+=matrixsum;
    }
    return sum;
}
int main()
{
    printf("3D Array Addition \n");
    get();
    printf("Sum of all the element in both matrix: %d",mat1());
    return 0;
}