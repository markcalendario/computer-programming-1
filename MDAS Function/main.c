#include <stdio.h>
#include <stdlib.h>
#include "MDAS.h"

int main()
{
    int choice = 0;
    int exit = 0;
    int isUserWantToExit = 0;
    int tryAgain = 0;
    while (exit == 0)
    {
        if (choice < 1 || choice > 5)
        {
            system("cls");
            printf("Welcome to Calculator Program!\n");
            printf("========== Operations Menu ==========\n");
            printf("1. Multiplication\n");
            printf("2. Division\n");
            printf("3. Addition\n");
            printf("4. Subtraction\n");
            printf("5. Exit\n");
            printf("=====================================\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
        }

        if (choice > 0 || choice < 6)
        {
            system("cls");
            switch (choice)
            {
            case 1:
                MULTIPLICATION();
                break;
            case 2:
                DIVISION();
                break;
            case 3:
                ADD();
                break;
            case 4:
                SUBTRACTION();
                break;
            }
        }

        if (choice == 5)
        {
            printf("Are you sure do you want to exit? [0-No | 1-Yes]: ");
            scanf("%d", &isUserWantToExit);
            if (isUserWantToExit)
            {
                exit = 1;
            }
            else
            {
                choice = 0;
            }
        }
        tryAgain = 0;
        if (choice > 0 && choice < 6 && exit != 1)
        {

            printf("\n====================================");
            printf("\nDo you want to try again? [1-Yes | 0-No]: ");
            scanf("%d", &tryAgain);

            if (tryAgain != 1)
            {
                choice = 0;
            }
        }
    }

    return 0;
}