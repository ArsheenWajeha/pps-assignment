#include <stdio.h>
int main()
{
    int list[] = {16, 30, 24, 7, 25, 62, 45, 5, 65, 50},n;
    printf("Enter the number to be search >> ");
    scanf("%d", &n);
    printf("Searching the element of 24 in the list using linear search\n");
    for (int i = 0; i < 10; i++)
    {
       if (list[i]==n)
       {
           printf("Element %d is found at %d index with %d key comparisons", n, i, i + 1);
       }
       
       
    }
    
}