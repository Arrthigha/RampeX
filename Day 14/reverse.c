#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i,j;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
     while(str[i]!='\0' && str[i]!='\n')
            i++;
    j=i-1;
    i=0;
    while(i<j)
    {
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("string : %s\n", str);
    return 0;
}
