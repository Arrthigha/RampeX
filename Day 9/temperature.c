#include<stdio.h>
float fah,cel,n;
int cel_to_fah(int n)
{
    printf("Enter the value for celcius : ");
        scanf("%f",&cel);
        fah=(cel*9.0/5.0)+32;
        printf("Fahrenheit : %.2f", fah);
    return fah;
}
int fah_to_cel(int n)
{
    printf("Enter the value for fahrenheit : ");
        scanf("%f",&fah);  
        cel=(fah-32)*5.0/9.0;
        printf("Celcius: %.2f", cel);
        return cel;
}
int main(){
    printf("Enter the value(1=cel to fah , 2=fah to cel) : ");
    scanf("%f",&n);
    if(n==1)
    {
         cel_to_fah(n);
    }
    else if(n==2)
    {
        fah_to_cel(n);
    }
    else
    {
        printf("Invalid Value.");
    }
    return 0;
}
