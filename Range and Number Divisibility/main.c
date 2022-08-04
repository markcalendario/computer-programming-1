#include <stdio.h>

int main()
{
    char name[80];
    int N1, N2, M, count = 0;

    printf("Welcome to Range and Number Divisibility Program!\n");
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter a range of numbers.\n");
    printf("Starts from: ");
    scanf("%d", &N1);
    printf("Ends to: ");
    scanf("%d", &N2);
    printf("Enter a number that will serve as modulus: ");
    scanf("%d", &M);

    printf("\nNumber/s from %d to %d divisible by %d is/are: ", N1, N2, M);
    for (int I = N1; I <= N2; I++)
    {
        if (I % M == 0)
        {
            printf("%d ", I);
            count++;
        }
    }

    printf("\nTotal count of numbers are %d.\n", count);
    printf("Thank you %s, have a nice day!", name);

    return 0;
}