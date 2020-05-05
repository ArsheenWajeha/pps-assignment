#include <stdio.h>
void main()
{
    int list[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if (40 == list[i])
        {
            printf("Total number of key comparied to find the number 40 >> %d", i + 1);
        }
    }
}