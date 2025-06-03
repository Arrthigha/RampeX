#include <stdio.h>

int main() {
    int count = 0, upper = 0;
    char a[50];

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    while (a[count] != '\0' && a[count] != '\n') {
        if (a[count] >= 'A' && a[count] <= 'Z') {
            upper += 1;
        }
        count++;
    }

    printf("Total no. of uppercase letters: %d\n", upper);
    return 0;
}
