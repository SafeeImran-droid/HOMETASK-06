#include <stdio.h>

int main() {
    int num, evenCount = 0, oddCount = 0;

    printf("Enter 10 numbers one by one:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nYou entered %d even numbers and %d odd numbers.\n", evenCount, oddCount);
    return 0;
}
