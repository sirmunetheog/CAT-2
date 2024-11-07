#include <stdio.h>

int main() {
    // Declare and initialize a 2D array with given values
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };
    
    // Nested loop to print the elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}