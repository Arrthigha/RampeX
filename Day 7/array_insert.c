#include <stdio.h>
int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2,val;
    printf("Enter element to be inserted : ");
    scanf("%d", &val);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}