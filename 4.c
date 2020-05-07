#include <stdio.h>
void main()
{
    int list[] = {20, 10, 17, 2, 18, 35, 30, 90, 48, 47}, i, temp = 0;
    for (i = 0; i < 10; i++)
    {
        if (2 == list[i])
        {
            temp = 1;
            printf("2 is found at location %d\n", i + 1);
            printf("minimum number of comparisions to be made to get 2 is %d", i + 1);
        }
    }
    if (temp != 1)
        printf("element 2 is not found");
}