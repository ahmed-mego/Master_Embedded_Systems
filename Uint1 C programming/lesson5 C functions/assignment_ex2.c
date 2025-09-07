#include <stdio.h>

int factorial(int);

int main ()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("factorial of %d = %d", n,factorial(n));

}

int factorial(int n) 
{
    if (n > 1)
    {
        return (n * factorial(n-1));
    }
}