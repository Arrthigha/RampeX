#include <stdio.h>

int main() {
    char str[100];
    int i = 0, Count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n') {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || 
              (str[i] >= 'a' && str[i] <= 'z') || 
              (str[i] >= '0' && str[i] <= '9'))) {
            Count++;
        }
        i++;
    }
    printf("Total special characters: %d\n", Count);
    return 0;
}
