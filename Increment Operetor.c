#include <stdio.h>
int main()
{
    int a, b, c;
    a = 12;
    ++a;
    b = a++;
    c = ++a;
    printf("a=%d,b=%d,c=%d", a, b, c);
}