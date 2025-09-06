#include <stdio.h>

void primeNumbers(int, int);

int main() 
{
    int a, b;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &a, &b);
    primeNumbers(a, b);

}

void primeNumbers(int a, int b)
{
    for(int i = a; i <= b; i++)
    {
        if (i % 2 == 0) continue;

        else printf("%d ", i); 
    }
}

