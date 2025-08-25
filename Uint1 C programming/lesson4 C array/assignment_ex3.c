#include <stdio.h>

int main() {
    int i, j, r, c;

    // Input the matrix dimensions
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int matrixT[c][r];

    // Input the matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("matrixA[%d][%d] = ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate transpose 
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            matrixT[j][i] = matrix[i][j];
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print transpose
    printf("\nTranspose Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", matrixT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
