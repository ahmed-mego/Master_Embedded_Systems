/*
 * Program: Average of N numbers
 * Author : Ahmed
 *
 * This program takes N numbers from the user,
 * stores them in an array, calculates their sum,
 * and prints the average.
 */

#include <stdio.h>

int main() {

    int n;
    float sum = 0;

    // get the number of data from the user 
    printf("Enter the number of data: ");
    scanf("%d", &n);

    float arr[n];   // declare array after knowing n

    // get the data from the user 
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    // calculate and print average 
    printf("Average = %.2f", sum / n);

    return 0;
}
