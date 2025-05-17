#include <stdio.h>
int main() {
    int num, reversed = 0, original,digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if (original == reversed)
        printf("The Given number is a Palindrome\n");
    else
        printf("The Given  number is Not a palindrome\n");
    return 0;
}