#include <stdio.h>
#include <ctype.h>

void camelCaseToUpper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
int main() {
    char str[100];
    printf("Enter a camel case string: ");
    fgets(str, sizeof(str), stdin);

    camelCaseToUpper(str);
    printf("Uppercase string: %s\n", str);

    return 0;
}