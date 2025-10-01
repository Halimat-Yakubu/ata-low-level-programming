#include <stdio.h>

int main() {
    float principal; 
    float rate;
    float time; 
    float simple_interest;

    
    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    
    simple_interest = (principal * rate * time) / 100;

    
    printf("\nSimple Interest = %.2f\n", simple_interest);

    return 0;
}
