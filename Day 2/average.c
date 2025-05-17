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
    printf("Average : %d",avg);
    return 0;
}