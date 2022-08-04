#include <stdio.h>

int main()
{
    char name[80];
    int daysLate;
    printf("Video Rental Fining System.\n");
    printf("Please enter the name of CD renter: ");
    scanf("%s", name);
    printf("Enter a number of days late: ");
    scanf("%d", &daysLate);

    printf("%s, you have to pay fine that cost/s ", name);

    if (daysLate <= 2)
    {
        printf("Php 10.00.");
    }
    else if (daysLate <= 4)
    {
        printf("Php 15.00.");
    }
    else if (daysLate <= 5) // the 6 is missing in IM
    {
        printf("Php 20.00.");
    }
    else if (daysLate >= 7)
    {
        printf("the amount of rent (CD = 50.00 / VHS = 35.00).");
    }

    return 0;
}