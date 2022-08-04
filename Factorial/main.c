#include <stdio.h>

int main()
{

    int N;
    char name[80];
    unsigned long long factorial = 1;

    printf("Welcome to Factorial Program!\n");
    printf("Please enter your name: ");
    scanf("%s", name);

    // Check first if a number is NON-NEGATIVE
    // Then repeat asking if not NON-NEGATIVE
    do
    {
        printf("Please enter a NON-NEGATIVE integer: ");
        scanf("%d", &N);
    } while (N < 0);

    for (int i = N; i >= 1; i--)
    {
        if (N != 0)
        {
            factorial *= i;
        }
        else
        {
            break;
        }
    }

    printf("The factorial of %d (%d!) is %llu.", N, N, factorial);
    printf("\nThank you %s, have a nice day!", name);
    return 0;
}