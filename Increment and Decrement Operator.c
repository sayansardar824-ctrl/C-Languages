#include <stdio.h>
int main()
{
    int x = 3, y = 5, z = 10, p = 8, A, B, C, D;
    A = ++x * ++y;
    B = y-- * y--;
    C = ++z * --z;
    D = p-- * --p;
    printf("A=%d\t,B=%d\t,C=%d\t,D=%d\t", A, B, C, D);
    return 0;
}
