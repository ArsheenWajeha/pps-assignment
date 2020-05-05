#include <stdio.h>
void main()
{
    int list[] = {4, 18, 29, 35, 44, 59, 65, 98};
    int i = 0;
    for ( i = 0; i < 10; i++)
    {
        if (44 == list[i])
        {
            printf("Total number of key comparied to find the number 44 >> %d", i + 1);
        }
    }
}
