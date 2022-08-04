#include <stdio.h>

int getNum1()
{
    int n1;
    printf("Please enter a first number: ");
    scanf("%d", &n1);
    return n1;
}

int getNum2()
{
    int n2;
    printf("Please enter a second number: ");
    scanf("%d", &n2);
    return n2;
}

void ADD()
{
    printf("[ADDITION]\n");
    int num1 = getNum1();
    int num2 = getNum2();
    int answer = num1 + num2;
    printf("%d + %d = %d", num1, num2, answer);
}

void SUBTRACTION()
{
    printf("[SUBTRACTION]\n");
    int num1 = getNum1();
    int num2 = getNum2();
    int answer = num1 - num2;
    printf("%d - %d = %d", num1, num2, answer);
}

void MULTIPLICATION()
{
    printf("[MULTIPLICATION]\n");
    int num1 = getNum1();
    int num2 = getNum2();
    int answer = num1 * num2;
    printf("%d * %d = %d", num1, num2, answer);
}

void DIVISION()
{
    printf("[DIVISION]\n");
    int num1 = getNum1();
    int num2 = getNum2();
    if (num2 == 0)
    {
        printf("Cannot be divided by 0.");
        return;
    }

    int answer = num1 / num2;
    printf("%d / %d = %d", num1, num2, answer);
}