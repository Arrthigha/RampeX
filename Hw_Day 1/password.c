#include <stdio.h>

int main() {
    int count = 0;
    char a[50], b[50];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    while (a[count] != '\0' && a[count] != '\n') {
        b[count] = '*';
        count++;
    }
    b[count] = '\0'; 
    printf("Password Format: %s\n", b);
    printf("Original String: %s", a);

    return 0;
}
