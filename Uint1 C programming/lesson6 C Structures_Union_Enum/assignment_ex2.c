#include <stdio.h>
#include <math.h>

struct distance
{
    int feet;
    float inches;
};

int main()
{
    struct distance d1, d2, sum; 
    printf("Enter information for 1st distance\n");
    printf("Enter feet: "); scanf("%d", &d1.feet);
    printf("enter inch: "); scanf("%f", &d1.inches);

    printf("\nEnter information for 2st distance\n");

    printf("Enter feet: "); scanf("%d", &d2.feet);
    printf("enter inch: "); scanf("%f", &d2.inches);

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    
    if(sum.inches >= 12)
    {
        sum.feet += (int)(sum.inches / 12);
        sum.inches = sum.inches - ((int)sum.inches / 12) * 12;
    }
    printf("Sum of distance = %d feet %.2f inches", sum.feet, sum.inches);
}