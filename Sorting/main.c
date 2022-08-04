// Online C compiler to run C program online
#include <stdio.h>
#include <conio.h>

int main()
{
    // Write C code here
    int arr[5] = {3, 3, 2, 2, 1};
    int temp = 0;
    int isOk = 0;

    while (isOk == 0)
    {
        for (int index = 0; index < 4; index++)
        {
            if (arr[index] > arr[index + 1])
            {
                temp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = temp;
            }
        }

        for (int i = 0; i < 4; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                break;
            }
            else if (i == 3)
            {
                isOk = 1;
            }
        }
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}