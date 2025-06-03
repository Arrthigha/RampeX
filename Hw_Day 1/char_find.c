#include <stdio.h>

int main() {
    int count = 0, found = 0;
    char a[50], ch;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter a character to find: ");
    scanf(" %c", &ch);
    while (a[count] != '\0' && a[count] != '\n') {
        if (a[count] == ch) {
            found = 1;
            break;
        }
        count++;
    }
    if (found)
        printf("Present\n");
    else
        printf("Not Present\n");

    return 0;
}
