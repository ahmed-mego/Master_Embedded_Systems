#include <stdio.h>

int power(int, int);

int main()
{
    int num, p;
    printf("Enter base number: ");
    scanf("%d", &num);
    printf("Enter power number (positive): ");
    scanf("%d", &p);
    printf("%d^%d = %d", num, p, power(num, p));
}

int power(int num, int p)
{
    if(p == 0)
    {
        return 1;
    }
    else if(num == 1)
    {
        return num;
    }
    else 
    {
        return num * power(num, p -1);
    }
}