#include <stdio.h>
int main()
{
    char userScore;
    char userGrade;
    printf("Enter your score (0-100): ");
    scanf("%c", &userScore);

    if (userScore >= 0 && userScore <= 45)
    {
        userGrade = 'F';
        printf("Your grade is %c\n", userGrade);
    }

    else if (userScore >= 46 && userScore <= 60)
    {
        userGrade = 'D';
        printf("Your grade is %c\n", userGrade);
    }

    else if (userScore == 61 && userScore <= 84)
    {
        userGrade = 'C';
        printf("Your grade is %c\n", userGrade);
    }

    else if (userScore >= 85 && userScore <= 94)
    {
        userGrade = 'B';
        printf("Your grade is %c\n", userGrade);
    }

    else if (userScore >= 95 && userScore <= 100)
    {
        userGrade = 'A';
        printf("Your grade is %c\n", userGrade);
    }

    else
    {
        printf("Invalid: your score must be between 0 - 100");
    }
}
