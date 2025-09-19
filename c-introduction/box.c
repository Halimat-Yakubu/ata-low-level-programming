#include <stdio.h>

void drawAsciiBox(int width, int height)
{
    if (width < 2 || height < 2)
    {
        printf("Width and height must be at least 2 for a visible box.\n");
        return;
    }

    int row, col;

    // Top border
    printf("%c", '*'); // Top-left corner
    for (col = 0; col < width - 2; col++)
    {
        printf("%c", '*'); // Horizontal line
    }
    printf("%c\n", '*'); // Top-right corner

    // Middle rows
    for (row = 0; row < height - 1; row++)
    {
        printf("%c", '*'); // Left border
        for (col = 0; col < width - 1; col++)
        {
            printf("%c", ' '); // Empty space inside the box
        }
        printf("%c\n", '*'); // Right border
    }

    // Bottom border
    printf("%c", '*'); // Bottom-left corner
    for (col = 0; col < width - 2; col++)
    {
        printf("%c", '*'); // Horizontal line
    }
    printf("%c\n", '*'); // Bottom-right corner
}

int main()
{
    drawAsciiBox(8, 3); // Example: Draw a box with width 10 and height 5
    return 0;
}
