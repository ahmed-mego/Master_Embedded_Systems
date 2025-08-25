/*
 * Program: Matrix Addition (2x2)
 * Author : Ahmed
 *
 * Description:
 * This program takes two 2x2 matrices as input from the user,
 * adds them element by element, and prints the resulting matrix.
 */

#include <stdio.h>

int main() {
    float matrixA[2][2], matrixB[2][2], matrixA_B[2][2];
    int i, j;

    // Input first matrix
    printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("matrixA[%d][%d] = ", i+1, j+1);
            scanf("%f", &matrixA[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("matrixB[%d][%d] = ", i+1, j+1);
            scanf("%f", &matrixB[i][j]);
        }
    }

    // Adding matrices
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            matrixA_B[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Printing result matrix
    printf("\nSum of Matrices: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.2f\t", matrixA_B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
