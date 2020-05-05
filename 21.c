#include <stdio.h>
void main()
{
    int list[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if (55 == list[i])
        {
            printf("Total number of key comparied to find the number 95 >> %d", i + 1);
            break;
        }
    }
    printf("Total number of key comparisons are executed by the sequential search algorithm >> %d", i);
    printf("\nthe element 55 is not found 😭");
}