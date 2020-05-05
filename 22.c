#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    printf("the number searched in the list is 8\n");
    binarysearch(list, 8);
}
void binarysearch(int list[], int n)
{
    int i = 0, f = 0, l = 8;
    int m = (f + l) / 2;
    while ((f != m))
    {

        if (list[m] > n)
        {
            l = m;
            m = (m + f) / 2;
        }
        if (list[m] < n)
        {
            f = m;
            m = (m + l) / 2;
        }
        if (f == 2)
        {
            if (list[m] != n)
            {
                printf("the loop terminates the value of the index variable first is %d\nand the element is not found.\n", f-1);
            }
            else
            {
                printf("the loop terminates the value of the index variable first is %d\nand the element is found at index\n", f, m);
            }
            break;
        }
    }
}
