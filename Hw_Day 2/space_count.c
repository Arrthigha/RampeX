#include <stdio.h>

int main() {
    char str[50];
    int i = 0, Count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            Count++;
        }
        i++;
    }
    printf("Total number of spaces: %d\n", Count);
    return 0;
}
