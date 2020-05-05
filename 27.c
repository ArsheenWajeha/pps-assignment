#include <stdio.h>
#include <stdlib.h>
int main()
{
    int list[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, n, i = 0;
    printf("Enter the number to be search >> ");
    scanf("%d", &n);
    printf("Searching the element %d using linear search\n", n);
    for (i = 0; i < 10; i++)
    {
        if (list[i] == n)
        {
            printf("Element %d is found at %d index with %d key comparisons", n, i, i + 1);
            exit(0);
        }
    }
    printf("Element %d is not found and total number of comparisons taken to complete the algorithm is %d", n, i + 1);
}