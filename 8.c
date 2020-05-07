#include <stdio.h>
void main()
{
    int list[] = {16, 30, 24, 7, 25, 62, 45, 5, 65, 50}, i, j, n = 10, temp = 0, k, low, mid, high, min;
    printf("elements before sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", list[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (list[j] < list[min])
                min = j;
        }
        if (min != i)
        {
            temp = list[i];
            list[i] = list[min];
            list[min] = temp;
        }
    }
    printf("elements after sorting are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", list[i]);
    }
    printf("enter elements into array\n");
    printf("enter search key:");
    scanf("%d", &k);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (list[mid] < k)
        {
            low = mid + 1;
        }
        else if (list[mid] > k)
        {
            high = mid - 1;
        }
        else
            break;
    }
    if (list[mid] == k)
    {
        printf("element is found at location %d\n", mid + 1);
        printf("element is found and the loop terminates at index %d", mid);
    }
    else
        printf("element not found");
}
