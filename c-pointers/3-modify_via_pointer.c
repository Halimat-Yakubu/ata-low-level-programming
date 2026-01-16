#include <stdio.h>

int main() {
    int score = 75;
    int *ptr_score = &score;
    
    printf("Initial score: %d\n", score);
    
    *ptr_score = 90;
    
    printf("Score after modification via pointer: %d\n", score);
    
    return 0;
}
