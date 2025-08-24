#include <stdio.h>

int main() {

    int n;
    float sum = 0;

    // get the number of data from the user 
    printf("enter the number of data: \n");
    scanf("%d", &n);

    float arr[n];   // declare array after knowing n

    // get the data from the user 
    for(int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    // calculate and print average 
    printf("Average = %.2f", sum / n);

    return 0;
}