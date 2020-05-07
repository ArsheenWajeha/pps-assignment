#include <stdio.h>
#include <conio.h>
void main()
{
    int list[] = {16, 30, 24, 7, 25, 62, 45, 5, 65, 50}, n = 10, i, k, temp = 0;
    printf("enter the search key:");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        if (k == list[i])
        {
            temp = 1;
            printf("\n%d is found at location %d\n", k, i + 1);
            break;
        }
    }
    if (temp != 1)
    {
        printf("element %d not found\n", k);
    }
    printf("The average number of comparisons to be made to find an element is %d", (n + 1) / 2);
}