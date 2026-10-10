#include <stdio.h>
int main()
{
    float kgs, lbs;
    printf("\n Enter a weight in kilograms:");
    scanf("%f", &kgs);
    lbs = kgs * 2.2;
    printf("\n\n %6.2f kilograms = %6.2f pound \n", kgs, lbs);
    return 0;
}
