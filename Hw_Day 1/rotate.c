#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int n, len, i, j;
    printf("Enter number of rotations: ");
    scanf("%d", &n);
    getchar();
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    n = n % len;
    for (i = 0; i < n; i++) {
        temp = str[0];
        for (j = 0; j < len - 1; j++) {
            str[j] = str[j + 1];
        }
        str[len - 1] = temp;
    }
    printf("Rotated string: %s\n", str);
    return 0;
}
