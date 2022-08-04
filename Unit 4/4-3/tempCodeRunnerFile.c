#include <stdio.h>

int main()
{
    int a, b, c, first, second, third;

    printf("Enter three numbers separated by space:");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            first = a;
            second = b;
            third = c;
        }
        else
        {
            first = a;
            second = c;
            third = b;
        }
    }

    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            first = b;
            second = a;
            third = c;
        }
        else
        {
            first = b;
            second = c;
            third = a;
        }
    }

    else
    {
        if (a >= b)
        {
            first = c;
            second = a;
            third = b;
        }
        else
        {
            first = c;
            second = b;
            third = a;
        }
    }

    printf("Descending Order: %d %d %d", first, second, third);

    return 0;
}