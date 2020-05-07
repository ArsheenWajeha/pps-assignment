#include <stdio.h>
void main()
{
    int list[] = {2, 4, 6, 8, 10, 12, 14, 16}, n = 9, i, k, low, mid, high;
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
    {
        printf("element not found");
        printf("the loop terminates at the value of the index %d", high);
    }
}