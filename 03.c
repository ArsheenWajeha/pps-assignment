#include <stdio.h>
void main()
{
    int list[] = {35, 12, 27, 18, 45, 16, 38}, i, temp = 0;
    for (i = 0; i < 7; i++)
    {
        if (18 == list[i])
        {
            temp = 1;
            printf("18 is found at location %d\n", i + 1);
            printf("minimum number of comparisions to be made to get 18 is %d", i + 1);
        }
    }
    if (temp != 1)
        printf("element 18 is not found");
}