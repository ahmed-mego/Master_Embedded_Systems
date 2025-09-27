#include <stdio.h>

struct complexNum 
{
 float real;
 float imaginary;   
};

int main()
{
    struct complexNum n1, n2, sum;

    printf("For 1st complex number\n");
    printf("Enter real and imaginary recpictively: ");
    scanf("%f%f", &n1.real, &n1.imaginary);

    printf("For 2nd complex number\n");
    printf("Enter real and imaginary recpictively: ");
    scanf("%f%f", &n2.real, &n2.imaginary);

    sum.real = n1.real + n2.real;
    sum.imaginary = n1.imaginary + n2.imaginary;

    printf("Sum = %.1f + %.1fi", sum.real, sum.imaginary);
}