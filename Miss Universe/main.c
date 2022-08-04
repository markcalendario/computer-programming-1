#include <stdio.h>

int main()
{
    float height, weight;
    int educ, waistline, bustline, hipline;
    char name[80];

    printf("======================================================\n");
    printf("\tWelcome to Screening of Miss Universe\n");
    printf("======================================================\n");
    printf("Please enter your name: ");
    scanf("%s", name);

    printf("\nPlease enter your height in feet: ");
    scanf("%f", &height);

    if (height >= 5 && height <= 6)
    {
        printf("Please enter your weight in pounds: ");
        scanf("%f", &weight);

        if (weight >= 90)
        {
            printf("Have you graduated high school [1-Yes | 0-No]: ");
            scanf("%d", &educ);

            if (educ == 1)
            {
                printf("Please enter your waist line in inches: ");
                scanf("%d", &waistline);

                if (waistline >= 24 && waistline <= 30)
                {
                    printf("Please enter your bust line in inches: ");
                    scanf("%d", &bustline);

                    if (bustline >= 32 && bustline <= 36)
                    {
                        printf("Please enter your hip line in inches: ");
                        scanf("%d", &hipline);

                        if (hipline >= 32 && hipline <= 36)
                        {
                            printf("Congratulations, %s! You are qualified to join Miss Universe.", name);
                        }
                        else
                        {
                            printf("Sorry, %s! You are not qualified to join Miss Universe because of your hip line.", name);
                        }
                    }
                    else
                    {
                        printf("Sorry, %s! You are not qualified to join Miss Universe because of your bust line.", name);
                    }
                }
                else
                {
                    printf("Sorry, %s! You are not qualified to join Miss Universe because of your waist line.", name);
                }
            }
            else
            {
                printf("Sorry, %s! You are not qualified to join Miss Universe because you are not a high school graduate.", name);
            }
        }
        else
        {
            printf("Sorry, %s! You are not qualified to join Miss Universe because of your weight.", name);
        }
    }
    else
    {
        printf("Sorry, %s! You are not qualified to join Miss Universe because of your height.", name);
    }

    return 0;
}