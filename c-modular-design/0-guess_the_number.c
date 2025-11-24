#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function Prototypes */
void display_rules(void);
int generate_random_number(int min, int max);
int get_player_guess(void);
int check_guess(int secret_number, int guess);

int main(void)
{
    int secret_number;
    int player_guess;
    int attempts = 0;
    int is_correct = 0;
/
    srand(time(NULL));

    display_rules();

  
    secret_number = generate_random_number(1, 100);

    while (is_correct == 0)
    {
        player_guess = get_player_guess();
        attempts++;
        
        is_correct = check_guess(secret_number, player_guess);
    }

    printf("It took you %d attempts.\n", attempts);

    return (0);
}

void display_rules(void)
{
    printf("Welcome to the Guess the Number game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n\n");
}

int generate_random_number(int min, int max)
{
    return ((rand() % (max - min + 1)) + min);
}

int get_player_guess(void)
{
    int guess;
    int result;

    while (1)
    {
        printf("Enter your guess: ");
        result = scanf("%d", &guess);

        if (result == 1)
        {
            return (guess);
        }
        else
        {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
        }
    }
}
 
int check_guess(int secret_number, int guess)
{
    if (guess < secret_number)
    {
        printf("Too low! Try again.\n");
        return (0);
    }
    else if (guess > secret_number)
    {
        printf("Too high! Try again.\n");
        return (0);
    }
    else
    {
        printf("Congratulations! You guessed the number!\n");
        return (1);
    }
}
