#include <stdio.h>
void main()
{
    int list[] = {20, 10, 17, 2, 18, 35, 30, 90, 48, 47};
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if (95 == list[i])
        {
            printf("Total number of key comparied to find the number 95 >> %d", i + 1);
            break;
        }
    }
    printf("Total number of key comparisons are executed by the sequential search algorithm >> %d", i);
    printf("\nthe element is not found 😭");
}