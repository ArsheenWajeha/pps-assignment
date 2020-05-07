
#include <stdio.h>
#include <conio.h>
void main()
{
    int list[] = {16, 30, 24, 7, 25, 62, 45, 5, 65, 50}, n = 10, i, j, min = 0, temp, mid;
    printf("elements before sorting\n");
    for (i = 0; i < n; i++)
        printf("%d \n", list[i]);
    for (i = 0; i < 2; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
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
    for (i = 0; i < n; i++)
    {
        printf("%d \n", list[i]);
    }
    mid = n / 2;
    printf("the middle element after sorting is %d", list[mid - 1]);
}