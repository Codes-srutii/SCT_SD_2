#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess, attempts = 0;
    int lowerLimit = 1, upperLimit = 100;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between lowerLimit and upperLimit
    randomNumber = (rand() % (upperLimit - lowerLimit + 1)) + lowerLimit;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between %d and %d. Can you guess it?\n", lowerLimit, upperLimit);

    // Loop until the user guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        attempts++;

        if (userGuess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (userGuess > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        }
    } while (userGuess != randomNumber);

    return 0;
}