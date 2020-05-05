#include<stdio.h>
void main()
{
    int i = 0;
    int list[] = {5, 10, 15, 20, 25, 30, 35, 40, 45};
    while (i!=4)
    {
       if (list[i]==28)
       {
           printf("the element 28 is found when the loop terminate at index 4");
       }
       i++;
    }
    if (list[i]!=28)
        printf("the element 28 is \033[0;31mnot \033[0mfound when the loop terminate at index 4");
}