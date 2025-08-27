#include <stdio.h>

int main() {
    // Define width and height for A0 in mm
    int width = 841;
    int height = 1189;

    printf("A-Series Paper Sizes (in mm):\n");

    for (int i = 0; i <= 8; i++) {
        printf("A%d: %d mm × %d mm\n", i, width, height);

        // Fold the paper to get the next size (swap and divide height by 2)
        int temp = width;
        width = height / 2;
        height = temp;
    }

    return 0;
}

