/*
 * Program: Insert an element into an array
 * Author : Ahmed
 *
 * Description:
 * This program takes an array of integers from the user, 
 * then inserts a new element at a specified position 
 * (shifting elements to the right). Finally, it prints 
 * the updated array.
 */

#include <stdio.h>

int main() {
    int n, e, l;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1];   // +1 to allow room for insertion

    // Input elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Input element and location
    printf("\nEnter the element to be inserted: ");
    scanf("%d", &e);

    printf("Enter the location (1 to %d): ", n+1);
    scanf("%d", &l);

    // Shift elements to the right
    for (int i = n; i >= l; i--) {
        arr[i] = arr[i - 1];
    }
    arr[l - 1] = e;

    // Print updated array
    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
