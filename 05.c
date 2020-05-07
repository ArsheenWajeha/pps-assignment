#include <stdio.h>
void main()
{
    int list[] = {16, 30, 24, 7, 25, 62, 45, 5, 65, 50}, i, temp = 0;
    for (i = 0; i < 10; i++)
    {
        if (5 == list[i])
        {
            temp = 1;
            printf("5 is found at location  %d\n", i + 1);
            printf("minimum number of comparisions to be made to get 5 is %d", i + 1);
        }
    }
    if (temp != 1)
        printf("element 5 is not found");
}