#include <stdio.h>
int main()
{
    int i, n;
    printf("which multiplication table is to be shown:\t");
    scanf("%d", &n);
    for (i = 1; i <= 12; i++)
    {
        printf("%d * %d =%d\n", n, i, n * i);
    }
    return 0;
}