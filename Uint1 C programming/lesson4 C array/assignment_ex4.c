#include <stdio.h>

int main() {
    int n, e, l;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1];

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to be inserted: ");
    scanf("%d", &e);

    printf("Enter the location: ");
    scanf("%d", &l);

    for (int i = n; i >= l; i--) {
        arr[i] = arr[i - 1];
    }
    arr[l - 1] = e;

    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

}