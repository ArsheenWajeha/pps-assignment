#include <stdio.h>
void main()
{
    int list[] = {4, 18, 29, 35, 44, 59, 65, 98}, n = 8, i, k, low, mid, high, mid1;
    printf("enter elements into array\n");
    printf("enter search key:");
    scanf("%d", &k);
    low = 0;
    high = n - 1;
    mid1 = (low + high) / 2;
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
        printf("element not found\n");
        printf("the search element is first compared to the element list[mid1]=%d", list[mid1]);
    }
}