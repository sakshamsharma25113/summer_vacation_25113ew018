//Write a program to Write function for Armstrong
#include <stdio.h>

int armstrong(int n) {
    int original = n, sum = 0, digit;

    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }

    return (sum == original);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}