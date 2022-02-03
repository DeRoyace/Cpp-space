#include <stdio.h>

int main()
{
    int i = 1, j = 2, k, l;
    k = --i * j++;
    l = i++ + --j - ++k;
    printf("%d %d %d %d\n", i, j, k, l);
    return 0;
}