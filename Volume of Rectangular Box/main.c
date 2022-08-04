#include <stdio.h>

int main()
{
    int width, height, length, volume;
    char name[80];

    printf("Hi! Welcome to Rectangle Volume Calculator!\n");
    printf("Please enter your name: ");
    scanf("\n%s", name);

    printf("Please supply the dimensions of the rectangle.\n");
    printf("Length: ");
    scanf("%d", &length);
    printf("Width: ");
    scanf("%d", &width);
    printf("Height: ");
    scanf("%d", &height);

    volume = length * width * height;

    printf("The volume of the rectangle is: %d\n", volume);
    printf("Thank you %s for using our program!", name);

    return 0;
}