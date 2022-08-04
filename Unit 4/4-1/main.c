#include <stdio.h>

int main()
{
    int age;
    char name[80];

    printf("Stages of Development\n");
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("%s, please enter your age: ", name);
    scanf("%d", &age);

    if (age >= 0 && age <= 12) // 0 - 12
    {
        printf("C");
    }
    else if (age > 12 && age <= 19) // 13 - 19
    {
        printf("T");
    }
    else if (age > 19) // 20 and above
    {
        printf("A");
    }

    return 0;
}