#include<stdio.h>
int main(){
    float temp;
    printf("Enter the Temperature in celcius : ");
    scanf("%f",&temp);
    if(temp<10)
    {
        printf("Now its %f celcius. so wear Jacket.",temp);
    }
    else if(temp>=10 && temp<=20)
    {
            printf("Now its %.2f celcius. so wear Sweater.",temp);
    }
    else{
            printf("Now its %.2f celcius. so wear T-shirt.",temp);

    }
    return 0;
}