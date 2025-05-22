#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 100
#define FILE_NAME "stats.txt"

void saveStats(int gamesPlayed, int totalGuesses) {
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("Error saving stats!\n");
        return;
    }
    fprintf(file, "Games Played: %d\nTotal Guesses: %d\n", gamesPlayed, totalGuesses);
    fclose(file);
}

void loadStats(int *gamesPlayed, int *totalGuesses) {
    FILE *file = fopen(FILE_NAME, "r");
    if (file != NULL) {
        fscanf(file, "Games Played: %d\nTotal Guesses: %d\n", gamesPlayed, totalGuesses);
        fclose(file);
    }
}

void playGame(int *gamesPlayed, int *totalGuesses) {
    int guess, answer, guesses = 0;
    
    answer = (rand() % MAX) + MIN;

    printf("\n🎯 Welcome to the Number Guessing Game! 🎯\n");
    printf("Guess a number between %d and %d.\n", MIN, MAX);
    
    do {
        printf("Enter your guess: ");
  
        while (scanf("%d", &guess) != 1) {
            printf("Invalid input! Please enter a number: ");
            while (getchar() != '\n'); 
        }

        if (guess < answer) {
            printf("⬇️ Too low! Try again.\n");
        } else if (guess > answer) {
            printf("⬆️ Too high! Try again.\n");
        } else {
            printf("🎉 CORRECT! You guessed it in %d tries. 🎉\n", guesses + 1);
        }

        guesses++;
        
    } while (guess != answer);

    (*gamesPlayed)++;
    (*totalGuesses) += guesses;

    printf("\n📊 Game Summary 📊\n");
    printf("✔️ Answer: %d\n", answer);
    printf("🔢 Total Guesses This Round: %d\n", guesses);

    if (guesses == 1) {
        printf("🎖️ Incredible! You got it on the first try!\n");
    }

    saveStats(*gamesPlayed, *totalGuesses);
}

int main() {
    int gamesPlayed = 0, totalGuesses = 0;
    char choice;
    
    srand(time(0)); 
    
    loadStats(&gamesPlayed, &totalGuesses);

    do {
        playGame(&gamesPlayed, &totalGuesses);

        printf("\n📜 Overall Stats 📜\n");
        printf("🎮 Games Played: %d\n", gamesPlayed);
        printf("📈 Average Guesses per Game: %.2f\n", (double)totalGuesses / gamesPlayed);

        printf("\nWould you like to play again? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');

    printf("\nThanks for playing! 🎮\n");

    return 0;
}
