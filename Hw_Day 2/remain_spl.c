#include <stdio.h>

int main() {
    char str[100], str2[100];
    int i = 0, j, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    j = len - 1;
    while (i < len) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || 
              (str[i] >= 'a' && str[i] <= 'z') || 
              (str[i] >= '0' && str[i] <= '9'))) {
            str2[i] = str[i]; 
        } else {
            while (j >= 0 && !((str[j] >= 'A' && str[j] <= 'Z') || 
                               (str[j] >= 'a' && str[j] <= 'z') || 
                               (str[j] >= '0' && str[j] <= '9'))) {
                j--;
            }
            str2[i] = str[j];
            j--;
        }
        i++;
    }

    str2[len] = '\0';

    printf("Reversed string: %s\n", str2);

    return 0;
}
