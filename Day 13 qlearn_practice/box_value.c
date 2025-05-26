#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int size = 2*n-1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;
            if (left < min) min = left;
            if (bottom < min) min = bottom;
            if (right < min) min = right;

            int value = n - min;
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
