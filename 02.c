#include <stdio.h>
#include <conio.h>
void main()
{
    int list[] = {24, 20, 10, 75, 70, 18, 60, 35}, i, j, min = 0, temp;
    printf("elements before sorting\n");
    for (i = 0; i < 8; i++)
        printf("%d \n", list[i]);
    for (i = 0; i < 2; i++)
    {
        min = i;
        for (j = i + 1; j < 8; j++)
        {
            if (list[j] < list[min])
                min = j;
        }
        if (min != i)
        {
            temp = list[i];
            list[i] = list[min];
            list[min] = temp;
        }
    }
    printf("elements after two iteration are\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d \n", list[i]);
    }
}