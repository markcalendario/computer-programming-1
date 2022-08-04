#include <stdio.h>
#include <conio.h>

int main()
{
    char name[80];
    int age, height, isPlanetEndorCitizen, isRecommendee;

    printf("Welcome to Jedi Knight Academy Application Form\n");
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Please enter your height in centimeter: ");
    scanf("%d", &height);
    printf("A Citizen of Planet Endor? [1 - Yes | 0 - No]: ");
    scanf("%d", &isPlanetEndorCitizen);
    printf("A Recommendee of Jedi Master Obi Wan? [1 - YES | 0 - No]: ");
    scanf("%d", &isRecommendee);

    if (isRecommendee == 1)
    {
        printf("Congratulations %s, you are accepted because you are a recommendee of Jedi Master Obi Wan!", name);
    }
    else if (isPlanetEndorCitizen == 1)
    {
        if (age < 21 || age > 25)
        {
            printf("Sorry %s, you are rejected because of your age.", name);
        }
        else if (height < 200)
        {
            printf("Sorry %s, you are rejected because of your height.", name);
        }
        else
        {
            printf("Congratulations %s, you are accepted to the Jedi Knight Academy!", name);
        }
    }
    else
    {
        printf("Sorry %s, you are rejected because you are not a citizen of Planet Endor.", name);
    }

    return 0;
}