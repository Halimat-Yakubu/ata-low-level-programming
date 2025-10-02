#include <stdio.h>

int main() {
    // Declare a file pointer.
    FILE *filePointer;

    // Open the file "quote.txt" in write mode ("w").
    // If the file does not exist, it will be created.
    // If it exists, its contents will be overwritten.
    filePointer = fopen("quote.txt", "w");

    // Check if the file was opened successfully.
    // fopen returns NULL if it fails.
    if (filePointer == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1; // Return a non-zero value to indicate an error.
    }

    // Use fputs to write the string into the file pointed to by filePointer.
    fputs("The journey of a thousand miles begins with a single step.", filePointer);

    // Close the file to ensure all data is written and resources are freed.
    fclose(filePointer);
    
    printf("Quote has been written to quote.txt successfully.\n");

    // Return 0 to indicate successful execution.
    return 0;
}

