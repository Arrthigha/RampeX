#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0,count=0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
     while(str[count]!='\0' && str[count]!='\n'){
            char ch = tolower(str[count]);
            if(ch>='a' && ch<='z')
            {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
                vowels++;
            else
                consonants++;
        }
        count++;
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
