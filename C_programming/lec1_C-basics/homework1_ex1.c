#include <stdio.h>

int main() {
    int x;
    printf("Enter an integer you want to check: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("%d is even\n", x);
    } 
	else {
        printf("%d is odd\n", x);
    }

    return 0;
}
