/*Calculation of total marks & average*/
#include <stdio.h>

int main() {
    int tam,eng,mat,sci,ss,sum,avg;
    printf("Enter your Tamil mark : ");
    scanf("%d",&tam);
    printf("Enter your English mark : ");
    scanf("%d",&eng);
    printf("Enter your maths mark : ");
    scanf("%d",&mat);
    printf("Enter your Science mark : ");
    scanf("%d",&sci);
    printf("Enter your social science mark : ");
    scanf("%d",&ss);
    sum=tam + eng + mat + sci + ss;
    avg=sum/5;
    printf("Total mark : %d\n",sum);
    printf("Average : %d\n",avg);
    if(avg>=90 && avg<=100)
    {
        printf("A grade");
    }
    else if(avg>=75 && avg<90)
    {
        printf("B grade");
    }
    else if(avg>=60 && avg<75)
    {
        printf("c grade");
    }
    else if(avg>=40 && avg<=60)
    {
        printf("D grade\n");
    }
    else {
        printf("Fail");
    }
    return 0;
}