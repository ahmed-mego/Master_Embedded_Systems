#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("%d is positive.\n", x);
    } else if (x < 0) {
        printf("%d is negative.\n", x);
    } else {
        printf("You entered zero.\n");
    }

    return 0;
}
