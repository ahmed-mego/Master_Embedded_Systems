/*
 * Program: Matrix Transpose
 * Author : Ahmed
 *
 * Description:
 * This program takes a matrix (rows × columns) as input from the user,
 * stores it in a 2D array, and computes its transpose by interchanging
 * rows with columns. Finally, it prints both the original and transposed
 * matrices.
 */

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
    printf("\nEntered Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print transpose
    printf("\nTranspose of Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", matrixT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
