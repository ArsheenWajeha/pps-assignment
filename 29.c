#include <stdio.h>
void main()
{
    int list[] = {4, 18, 29, 35, 44, 59, 65, 98};
    int i = 0, n;
    printf("Enter the number to be search using linear search >>");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (n == list[i])
        {
            printf("Element found\n");
            printf("Total number of key comparied to find the number %d >> %d", n, i + 1);
            break;
        }
    }
}