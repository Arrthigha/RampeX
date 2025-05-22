#include <stdio.h>
int countDigits(int n) {
    if (n == 0)
        return 0;
    else
        return 1 + countDigits(n / 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 0) {
        printf("Number of digits: 1\n");
    } 
    else 
    {
        if (number < 0)
            number = -number;

        int result = countDigits(number);
        printf("Number of digits: %d\n", result);
    }

    return 0;
}