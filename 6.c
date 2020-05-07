#include <stdio.h>
void main()
{
    int list[] = {16, 30, 24, 7, 25, 62, 45, 5, 65, 50}, n = 10, i, j, temp;
    printf("elements before sorting\n");
    for (i = 0; i < n; i++)
        printf("%d \n", list[i]);
    for (i = 0; i < 1; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    printf("elements after one swap\n");
    printf("elements that got swapped are %d and %d\n", list[i], list[j]);
    for (i = 0; i < n; i++)
    {
        printf("%d \n", list[i]);
    }
}