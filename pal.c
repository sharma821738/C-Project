#include <stdio.h>

void palindrome() {
    int number, original, reversed = 0, remainder;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

   // return 0;
}
