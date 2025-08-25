// Program: Linear Search
// Description: Reads an array and searches for an element.
// If found, prints its position; otherwise, prints "Not found".

#include <stdio.h>

int main() {
    int n, e, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &e);

    for (int i = 0; i < n; i++) {
        if (arr[i] == e) {
            printf("Found at position %d\n", i+1);
            found = 1;
            break;
        }
    }

    if (!found) printf("Not found\n");
}
