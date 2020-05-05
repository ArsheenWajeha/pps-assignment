#include<stdio.h>
void main()
{
    int list[] = {24, 20, 10, 75, 70, 18, 60, 35}, n, temp;
    printf("Enter the number of iteration to be performed >> ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        temp = list[i];
        int j = i - 1;
        while (temp<list[j]&& j>=0)
        {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = temp;
    }
    printf("The sorted list after %d iteration is >>\n", n);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", list[i]);
    }
    
}