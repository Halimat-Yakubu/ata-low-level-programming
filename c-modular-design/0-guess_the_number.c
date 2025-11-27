#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void display_rules(void);
int generate_random_number(int min, int max);
int get_player_guess(void);
int check_guess(int secret_number, int guess);

int main(void) {
    // Seed the random number generator once
    srand(time(NULL));

display_rules();
    
    // Generate a random secret number between 1 and 100
    int secret_number = generate_random_number(1, 100);
    
    int attempts = 0;
    int guess;
    int is_correct = 0;
    
    // Game loop - continues until the player guesses correctly
    while (!is_correct) {
        guess = get_player_guess();
        attempts++;
        is_correct = check_guess(secret_number, guess);
    }
    
    // Display the total number of attempts
    printf("\nYou found the number in %d attempt(s)!\n", attempts);
    
    return 0;
}

/**
 * display_rules - Prints the rules of the game to the console
 */
void display_rules(void) {
    printf("========================================\n");
    printf("     WELCOME TO GUESS THE NUMBER!      \n");
    printf("========================================\n\n");
    printf("RULES:\n");
    printf("1. I have selected a random number between 1 and 100.\n");
    printf("2. Your goal is to guess this number.\n");
    printf("3. After each guess, I will tell you if your guess is too high or too low.\n");
    printf("4. Keep guessing until you find the correct number!\n");
    printf("5. Try to guess the number in as few attempts as possible.\n\n");
    printf("Let's begin!\n\n");
}

/**
 * generate_random_number - Generates a random integer within a specified range
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 * 
 * Return: A random integer between min and max (inclusive)
 */
int generate_random_number(int min, int max) {
    return min + rand() % (max - min + 1);
}

/**
 * get_player_guess - Prompts the player for a guess and validates input
 * 
 * Return: A valid integer guess from the player
 */
int get_player_guess(void) {
    int guess;
    int valid_input;
    
    while (1) {
        printf("Enter your guess: ");
        valid_input = scanf("%d", &guess);
        
        // Check if scanf successfully read an integer
        if (valid_input == 1) {
            return guess;
        } else {
            printf("Error: Invalid input! Please enter a valid integer.\n");
            
            // Clear the invalid input from the input buffer
            while (getchar() != '\n');
        }
    }
}

/**
 * check_guess - Compares the player's guess with the secret number
 * @secret_number: The number to be guessed
 * @guess: The player's current guess
 * 
 * Return: 1 if the guess is correct, 0 otherwise
 */
int check_guess(int secret_number, int guess) {
    if (guess < secret_number) {
        printf("Too low! Try again.\n\n");
        return 0;
    } else if (guess > secret_number) {
        printf("Too high! Try again.\n\n");
        return 0;
    } else {
        printf("Congratulations! You guessed the number!\n");
        return 1;
    }
}
    







