#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[] = {5, 11, 25, 28, 45, 78, 100, 120, 125}, n;
    printf("Enter the number to be searched\n");

    scanf("%d", &n);
    binarysearch(list, n);
}
void binarysearch(int list[], int n)
{
    int i = 0, f = 0, l = 8, count = 0;
    int m = (f + l) / 2;
    while ((f != m))
    {

        if (list[m] > n)
        {
            l = m;
            m = (m + f) / 2;
            count++;
        }
        if (list[m] < n)
        {
            f = m;
            m = (m + l) / 2;
            count++;
        }
        if (list[m] == n)
        {
            printf("The element %d is found at %d index and \ntotal number of key comparisons to executed the binary search is %d ", n, m,count);
            exit(0);
        }
    }
    printf("The element %d is not found and total key comaparison taken to complete algorithm is %d", n, count);
}