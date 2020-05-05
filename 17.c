#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[] = {0, 10, 20, 30, 40, 50, 60, 70, 80};
    printf("the number searched in the list is 45\n");
    binarysearch(list, 45);
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
        if (f == 4 && l == 5)
        {
            printf("the loop terminates the value of the index variable first is %d\nand the value of the index variable last is %d.", f, l);
            printf("\nand the element is not found.\n");
        }
    }
}
