#include <stdio.h>

int main() {
    
    int rows, gaps;
    printf("enter the number or rows");
    scanf("%d",&rows);
    gaps = rows - 1;

    // Upper half of the diamond
    for (int r = 1; r <= rows; r++) {
        // Print spaces before the stars in each row
        for (int i = gaps; i > 0; i--) {
            printf(" ");    
        }
        // Print stars in each row
        for (int j = 1; j <= r; j++) {
            printf("* ");
        }
        // Decrease gaps for the next row
        gaps--;
        printf("\n");
    }

    // Lower half of the diamond
    gaps = 1;  // Set gaps to 1 for the first row of the lower half
    for (int r = rows - 1; r >= 1; r--) {
        // Print spaces before the stars in each row
        for (int i = gaps; i <= rows - r; i++) {
            printf(" ");  
        }
        // Print stars in each row
        for (int j = 1; j <= r; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
