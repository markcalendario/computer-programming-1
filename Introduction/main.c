#include <stdio.h>
#include <stdlib.h>

int main()
{
    int repeat = 1, choice = 0, exit;

    printf("Getting To Know Us\n");

    do
    {
        while (choice == 0)
        {
            printf("============================\n");
            printf("1. Almerol\n");
            printf("2. Calendario\n");
            printf("3. De Ocampo\n");
            printf("4. Frogosa\n");
            printf("5. Enrico\n");
            printf("6. Inovejas\n");
            printf("7. Magtangob\n");
            printf("8. Masarque\n");
            printf("9. Exit\n");
            printf("Choose your student: ");
            scanf("%d", &choice);

            if (choice == 0)
            {
                break;
            }
        }

        printf("============================\n");
        system("cls");

        if (choice == 1)
        {

            printf("Name: Alvin L. Almerol\n");
            printf("Birthday: January 23, 2003\n");
            printf("Age: 19\n");
            printf("Philosophy: \"Comfort Zone is a beautiful place but no grows in there\"\n");
            printf("Likes: Watching Tv Series and Films\n");
            printf("Dislikes: going out on crowded place\n");
            printf("Something to remember about me: I have always been called \"Alvin and the chipmunks\" because of my name.\n");
        }
        else if (choice == 2)
        {
            printf("Name: Mark Kenneth Calendario\n");
            printf("Birthday: October 19, 2002\n");
            printf("Age: 19\n");
            printf("Philosophy: \"Be happy for no reason.\"\n");
            printf("Likes: Cats\n");
            printf("Dislikes: Dogs\n");
            printf("Something to remember about me: My surname, so you will not forget the date.\n");
        }
        else if (choice == 3)
        {
            printf("Name: James Patrick de Ocampo\n");
            printf("Birthday: August 25, 2002\n");
            printf("Age: 19\n");
            printf("Philosophy: \"Anime is life\"\n");
            printf("Likes: Gaming, Rides, Drums \n");
            printf("Dislikes: Anything slimy\n");
            printf("Something to remember about me: Mole near my lower lips\n");
        }
        else if (choice == 4)
        {
            printf("Name: Erika Mae Frogosa\n");
            printf("Birthday: December 21,2002\n");
            printf("Age: 19\n");
            printf("Philosophy: \"Be positive in life\"\n");
            printf("Likes: Coffee\n");
            printf("Dislikes: Milk\n");
            printf("Something to remember about me: Kdrama lovers\n");
        }
        else if (choice == 5)
        {
            printf("Name: Carl Andrei E. Enrico\n");
            printf("Birthday: December 17, 2002\n");
            printf("Age: 19\n");
            printf("Philosophy: \"A future is not given to you. It is something you must take for yourself.\"\n");
            printf("Likes: Listening to music I like\n");
            printf("Dislikes: Some food \n");
            printf("Something to remember about me:  I can be very interactive once you become my friend\n");
        }
        else if (choice == 6)
        {
            printf("Name: Eden Grace M. Inovejas\n");
            printf("Birthday: May 06, 2003\n");
            printf("Age: 18\n");
            printf("Philosophy: \"Simplicity is beauty\"\n");
            printf("Likes: Dogs, Foods, and Online Games.\n");
            printf("Dislikes: Insects\n");
            printf("Something to remember about me: I'm quiet but I'm kind.\n");
        }
        else if (choice == 7)
        {
            printf("Name: Jay-R G. Magtangob\n");
            printf("Birthday: October 15, 2002\n");
            printf("Age: 19\n");
            printf("Philosophy: \"Do good, die great.\"\n");
            printf("Likes: To watch and to play\n");
            printf("Dislikes: Oil pastel or small spaces\n");
            printf("Something to remember about me: I can be your comrade\n");
        }
        else if (choice == 8)
        {
            printf("Name: Andy Dy Masarque\n");
            printf("Birthday: February 21, 2003\n");
            printf("Age: 18\n");
            printf("Philosophy: \"Enjoy now, suffer later.\"\n");
            printf("Likes: Chocolates, playing games, reading, and watching movies.\n");
            printf("Dislikes: Attention\n");
            printf("Something to remember about me: It's either my face or an embarrassing moment I did.\n");
        }

        if (choice < 1 || choice > 9)
        {
            printf("Invalid. Please enter 1-9 only.\n");
            choice = 0;
        }
        else if (choice == 9)
        {
            printf("Are you sure do you want to exit? [1-yes, 0-no]: ");
            scanf("%d", &exit);
            system("cls");
            if (exit == 1)
            {
                printf("Thank you, have a nice day!");
                return 0;
            }
            else
            {
                choice = 0;
            }
        }
        else
        {
            printf("\nDo you want to try again? [1-yes, 0-no]: ");
            scanf("%d", &repeat);
            system("cls");
            if (repeat == 0)
            {
                choice = 0;
            }
        }

    } while (1);

    return 0;
}