#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter any number: ");
    scanf("%d", &num);

    original = num; 
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("\nYes! %d is a palindrome number. \n", original);
    else
        printf("\nNo! %d is not a palindrome number. \n", original);

    return 0;
}
