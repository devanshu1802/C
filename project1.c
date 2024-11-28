#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h> 

#define MAX_TRIES 6
#define WORD_LIST_SIZE 5

void chooseWord(char *word);
void displayWord(char *word, int *guessed);
int checkGuess(char *word, char guess, int *guessed);
void displayHangman(int tries);

int main() {
    char word[20]; 
    int guessed[20] = {0}; 
    char guess; 
    int tries = 0; 
    int correctGuesses = 0; 

    srand(time(NULL)); 

    chooseWord(word); 

    
    while (tries < MAX_TRIES && correctGuesses < strlen(word)) {
        printf("\nCurrent Word: ");
        displayWord(word, guessed); 
        printf("\nGuess a letter: ");
        scanf(" %c", &guess); 
        guess = tolower(guess); 

        
        if (checkGuess(word, guess, guessed)) {
            correctGuesses++; 
            printf("Good guess!\n");
        } else {
            tries++; 
            printf("Wrong guess! You have %d tries left.\n", MAX_TRIES - tries);
        }

        displayHangman(tries); 
    }

    
    if (correctGuesses == strlen(word)) {
        printf("\nCongratulations! You've guessed the word: %s\n", word);
    } else {
        printf("\nSorry! You've run out of tries. The word was: %s\n", word);
    }
    
    return 0;
}


void chooseWord(char *word) {
    const char *wordList[WORD_LIST_SIZE] = {"macbook", "worldcup", "computer", "science", "maths"};
    strcpy(word, wordList[rand() % WORD_LIST_SIZE]); 
}

void displayWord(char *word, int *guessed) {
    for (int i = 0; i < strlen(word); i++) {
        if (guessed[i]) {
            printf("%c ", word[i]); 
        } else {
            printf("_ "); 
        }
    }
}

int checkGuess(char *word, char guess, int *guessed) {
    int found = 0; 
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == guess) {
            guessed[i] = 1; 
            found = 1; 
        }
    }
    return found; 
}

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
