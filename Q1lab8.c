#include <stdio.h>
#include <stdlib.h>

int main() {
    int image[8][8];
    int brightened[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            image[i][j] = rand() % 256;
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            brightened[i][j] = image[i][j] + 20;
        }
    }

    printf("Original Image (8x8):\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%3d ", image[i][j]);
        }
        printf("\n");
    }

    printf("\nBrightened Image (8x8):\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%3d ", brightened[i][j]);
        }
        printf("\n");
    }

    return 0;
}