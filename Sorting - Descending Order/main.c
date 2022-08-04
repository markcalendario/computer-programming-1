#include <stdio.h>

int main()
{
    char name[80];
    int a, b, c, first, second, third;

    printf("Welcome to Descending Numbers Program!\n");
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Enter three numbers separated by spaces: ");
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

    printf("%s, the Descending Order is %d %d %d", name, first, second, third);

    return 0;
}