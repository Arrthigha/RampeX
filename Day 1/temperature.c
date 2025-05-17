#include <stdio.h>

int main() 
{
    float n,cel, fah;
    printf("Enter the value(1=cel to fah , 2=fah to cel) : ");
    scanf("%f",&n);
    if(n==1)
    {
        printf("Enter the value for celcius : ");
        scanf("%f",&cel);
        fah=(cel*9.0/5.0)+32;
        printf("Fahrenheit : %.2f", fah);

    }
    else if (n==2)
    {
        printf("Enter the value for fahrenheit : ");
        scanf("%f",&fah);  
        cel=(fah-32)*5.0/9.0;
        printf("Celcius: %.2f", cel);

    }
    else{
        printf("Invalid statement");
    }
    return 0;
}