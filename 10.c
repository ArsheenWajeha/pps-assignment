#include <stdio.h>
void main()
{
    int list[] = {5, 11, 25, 28, 45, 78, 100, 120, 125}, n = 9, i, k, first, mid, last;
    printf("enter elements into array\n");
    printf("enter search key:");
    scanf("%d", &k);
    first = 0;
    last = n - 1;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (list[mid] < k)
        {
            first = mid + 1;
        }
        else if (list[mid] > k)
        {
            last = mid - 1;
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
        printf("the loop terminates at the value of the index %d\n", last);
        printf("when the loop terminates the value of first is %d and the last is %d", first, last);
    }
}