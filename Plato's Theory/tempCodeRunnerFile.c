// Mark Kenneth Calendario
// BSCS 1-1
// Plato's Theory

#include <stdio.h>
#include <conio.h>

int main()
{
    int age, IPA;
    char gender, name[80];

    printf("Plato's Theory of Ideal Partner's Age\n");
    printf("This theory allows you to know your ideal partner's age.\n");
    printf("\nKindly enter your name: ");
    scanf("%[^\n]", name);
    // The %s trims the name with spaces.
    // So I use %[^\n] instead of %s in order to copy the whole name.
    printf("\nM/m - Male | F/f - Female\n");
    printf("Please enter your gender: ");
    scanf("\n%c", &gender);
    printf("\nNow, please enter your age: ");
    scanf("\n%d", &age);

    if (gender == 'M' || gender == 'm')
    {
        IPA = (age / 2) + 7;
        printf("Hi Mr. %s, your ideal partner's age is %d.\n", name, IPA);
    }
    else
    {
        IPA = (age - 7) * 2;
        printf("Hi Ms. %s, your ideal partner's age is %d.\n", name, IPA);
    }

    printf("\nThank you for using my program!");
}