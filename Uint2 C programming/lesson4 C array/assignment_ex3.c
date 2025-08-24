#include <stdio.h>

int main() {
    float matrixA[2][2];
    int i, j;

    // Input the matrix 
    printf("Enter elements of matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("matrixA[%d][%d] = ", i+1, j+1);
            scanf("%f", &matrixA[i][j]);
        }
    }

}