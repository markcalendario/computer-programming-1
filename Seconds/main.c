#include <stdio.h>
#include <conio.h>

int main()
{
    int numberOfSeconds, seconds, minutes, hours;
    char name[80];

    printf("=================================\n");
    printf("Welcome to Time Convertion\n");
    printf("=================================\n");
    printf("Hello, what's your name?: ");
    scanf("%s", name);
    printf("\nPlease input number of seconds:\t");
    scanf("%d", &numberOfSeconds);

    hours = (numberOfSeconds / 3600);
    minutes = (numberOfSeconds - (3600 * hours)) / 60;
    seconds = (numberOfSeconds - (3600 * hours) - (minutes * 60));

    printf("\nSecond/s: %d\t", seconds);
    printf("\nMinute/s: %d\t", minutes);
    printf("\nHours/s: %d\t", hours);

    printf("\n%s, the time is %d:%d:%d", name, hours, minutes, seconds);
    return 0;
}