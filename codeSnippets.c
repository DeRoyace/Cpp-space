#include <stdio.h>

int main()
{
    // code snip 1:
    int i = 2, j = 13;
    {
        int i = 4, j = 5;
        printf("%d  %d  ", i, j);
    }
    printf("%d  %d  ", i, j);

    // code snip 2:
    int a=2, b=22, c;
    c=a, a=b, b=c;
    printf("\na = %d,  b = %d\n\n", a, b);
    return 0;
}
