#include<stdio.h>

int main() {
    // if height = 5
    int height;
    
    printf("height: ");
    scanf("%d", &height);
    
    // row = height; row >= 1; row -1
    for (int r = height; r >= 1; r--) {
        // space = 0; space < height - row; space +-1
        for (int s = 0; s < height - r; s++)
        printf(" ");
        // k = 1; k <= (2 * row) -1; k +1
        for (int k = 1; k <= 2*r - 1; k++)
        printf("*");
        printf("\n");
    }
    return 0;
}