#include <stdio.h>
int main() {
	int x, sum = 0;
	printf("Enter an integer: ");
	scanf("%d", &x);
	for(int i = 1; i <= x; i++){
		sum += i;
	}
	printf("Sum = %d", sum);
}