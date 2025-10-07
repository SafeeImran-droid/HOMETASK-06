#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("\nWow! %d is a perfect number\n", num);
    else
        printf("\nNo, %d is not a perfect number\n", num);

    return 0;
}
