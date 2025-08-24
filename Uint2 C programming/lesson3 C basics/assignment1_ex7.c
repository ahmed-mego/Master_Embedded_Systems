#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);
	a *= b;
	b = a / b;
	a /= b;
	printf(" value of \'a\' after swapping: %d\n", a);
	printf(" value of \'b\' after swapping: %d", b);
	
}