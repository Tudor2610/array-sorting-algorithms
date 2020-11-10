#include <stdio.h>

static void sort (void){

 int v[100], n, c, d, aux;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &v[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (v[d] > v[d+1]) 
      {
        aux    = v[d];
        v[d]   = v[d+1];
        v[d+1] = aux;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", v[c]);
}
int main()
{
  sort();
  return 0;
}
