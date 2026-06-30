#include <stdio.h>

int main() {
    int secret = 25, guess;

    printf("Guess the number (1-50): ");

    do {
        scanf("%d", &guess);

        if(guess > secret)
            printf("Too High! Try Again: ");
        else if(guess < secret)
            printf("Too Low! Try Again: ");
        else
            printf("Congratulations! You guessed correctly.\n");

    } while(guess != secret);

    return 0;
}