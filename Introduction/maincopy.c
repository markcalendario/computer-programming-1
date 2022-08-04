#include <stdio.h>

int main()
{
    int x, y;
    for (x = 1; x <= 5; x++)
    {
        for (y = 1; y <= 3; y++)
        {
            printf("%d\t", x);
        }
        printf("\n");
    }

    return 0;
}