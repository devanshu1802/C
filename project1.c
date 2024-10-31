#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h> // Include this header for time function

#define MAX_TRIES 6
#define WORD_LIST_SIZE 5

void chooseWord(char *word);
void displayWord(char *word, int *guessed);
int checkGuess(char *word, char guess, int *guessed);
void displayHangman(int tries);

int main() {
    char word[20]; // The word to guess
    int guessed[20] = {0}; // Track guessed letters
    char guess; // User's guess
    int tries = 0; // Number of incorrect guesses
    int correctGuesses = 0; // Count of correct letters guessed

    srand(time(NULL)); // Seed the random number generator

    chooseWord(word); // Choose a random word

    // Game loop
    while (tries < MAX_TRIES && correctGuesses < strlen(word)) {
        printf("\nCurrent Word: ");
        displayWord(word, guessed); // Show the current state of the word
        printf("\nGuess a letter: ");
        scanf(" %c", &guess); // Read user input
        guess = tolower(guess); // Convert to lowercase

        // Check if the guess is correct
        if (checkGuess(word, guess, guessed)) {
            correctGuesses++; // Increase count of correct guesses
            printf("Good guess!\n");
        } else {
            tries++; // Increase incorrect guess count
            printf("Wrong guess! You have %d tries left.\n", MAX_TRIES - tries);
        }

        displayHangman(tries); // Display hangman status
    }

    // Check if the player won or lost
    if (correctGuesses == strlen(word)) {
        printf("\nCongratulations! You've guessed the word: %s\n", word);
    } else {
        printf("\nSorry! You've run out of tries. The word was: %s\n", word);
    }
    
    return 0;
}

// Function to choose a random word
void chooseWord(char *word) {
    const char *wordList[WORD_LIST_SIZE] = {"macbook", "worldcup", "computer", "science", "maths"};
    strcpy(word, wordList[rand() % WORD_LIST_SIZE]); // Select a random word from the list
}

// Function to display the current state of the word
void displayWord(char *word, int *guessed) {
    for (int i = 0; i < strlen(word); i++) {
        if (guessed[i]) {
            printf("%c ", word[i]); // Show the letter if guessed
        } else {
            printf("_ "); // Show underscore if not guessed
        }
    }
}

// Function to check if the guessed letter is in the word
int checkGuess(char *word, char guess, int *guessed) {
    int found = 0; // Flag to check if letter is found
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == guess) {
            guessed[i] = 1; // Mark letter as guessed
            found = 1; // Set found flag
        }
    }
    return found; // Return whether the guess was correct
}

// Function to display the hangman based on the number of incorrect tries
void displayHangman(int tries) {
    printf("\nHangman: \n");
    switch (tries) {
        case 0: printf("   -----\n   |   |\n       |\n       |\n       |\n       |\n"); break;
        case 1: printf("   -----\n   |   |\n   O   |\n       |\n       |\n       |\n"); break;
        case 2: printf("   -----\n   |   |\n   O   |\n   |   |\n       |\n       |\n"); break;
        case 3: printf("   -----\n   |   |\n   O   |\n  /|   |\n       |\n       |\n"); break;
        case 4: printf("   -----\n   |   |\n   O   |\n  /|\\  |\n       |\n       |\n"); break;
        case 5: printf("   -----\n   |   |\n   O   |\n  /|\\  |\n  /    |\n       |\n"); break;
        case 6: printf("   -----\n   |   |\n   O   |\n  /|\\  |\n  / \\  |\n       |\n"); break;
    }
}
