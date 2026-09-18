// Write a C program to request two number and print their sum.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Their sum is %d \n", a + b);
    return 0;
}