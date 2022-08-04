#include <stdio.h>

int main()
{
    int a, b, c, sum, difference, product, sumOfSquares;
    float quotient;
    char name[80];
    printf("Hello there! Welcome to my program.\n");
    printf("This program will compute the sum, difference, 
    product, quotient, and sum of the squares of the three numbers.\n");
    printf("Please enter your name: ");
    scanf("%s", name);

    printf("\nPlease enter three numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    difference = a - b - c;
    quotient = a / b / c;
    product = a * b * c;
    sumOfSquares = (a * a) + (b * b) + (c * c);

    printf("%s, the results are: \n", name);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Sum of the Squares: %d\n", sumOfSquares);

    printf("\nThank you and have a nice day!");
    return 0;
}