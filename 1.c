#include <stdio.h>
#include <conio.h>
void main()
{
    int list[] = {2, 5, 8, 11, 14, 17, 20}, i, temp = 0;
    for (i = 0; i < 7; i++)
    {
        if (11 == list[i])
        {
            temp = 1;
            printf("11 is found at location %d", i + 1);
            break;
        }
    }
    if (temp != 1)
    {
        printf("element 11 not found");
    }
}