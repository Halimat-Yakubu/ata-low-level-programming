#include <stdio.h>
#include <math.h>  

int get_square_of_five(){

    double square = pow(5, 2); 
    return (int)square;         
 }

int main() {
    int result;

    result = get_square_of_five();

    printf("Square of 5 is: %d\n", result);

    return 0;
}


//int get_square_of_five() {
   // double square = pow(5, 2); 
    //return (int)square;         
// }

