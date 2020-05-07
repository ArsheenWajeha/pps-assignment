#include <stdio.h>
void main()
{
    int list[] = {4, 18, 29, 35, 44, 59, 65, 98}, n = 8, i, k, first, mid, last, count = 0;
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
            count++;
        }
        else if (list[mid] > k)
        {
            last = mid - 1;
            count++;
        }
        else
            break;
    }
    if (list[mid] == k)
    {
        printf("element is found at location %d\n", mid + 1);
        printf("element is found and the loop terminates at index %d\n", mid);
    }
    else
        printf("element not found\n");
    printf("the number of key comparisions made are %d inorder to find the element %d", count, k);
}