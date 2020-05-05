#include <stdio.h>
int main()
{
   int list[] = {24, 20, 10, 75, 70, 18, 60, 35};
   int n;
   printf("Sorting the element using bubble sort\n");
   printf("Enter the number of iterations >> ");
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < 8; j++)
      {
         if (list[j] > list[j + 1])
         {
            list[j] = list[j] + list[j + 1];
            list[j + 1] = list[j] - list[j + 1];
            list[j] = list[j] - list[j + 1];
         }
      }
      printf("the sorted list after %d iteration is >>", n);
      for (int i = 0; i < 8; i++)
      {
         printf("%d ", list[i]);
      }
   }