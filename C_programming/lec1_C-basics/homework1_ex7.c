#include <stdio.h>
int main(){
	int x;
	int factorial = 1;
	printf("Enter an integer: ");
	scanf("%d", &x);
	
	if(x < 0)
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else if (x == 0)
	{
		printf("Factorial = 0");
	}
	else 
	{
		for(int i = 1; i <= x; i++)
		{
			factorial *= i;
		}
		printf("Factorial = %d", factorial);
	}
}