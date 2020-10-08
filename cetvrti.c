#include <stdio.h>
 
int main()
{
  int niz[100],  i, mesto = 1, *max, n,;
 
  printf("Unesite broj elemenata: ");
  scanf("%d", &n);
  printf("Unesite elemenata niza: ");
  for ( i = 0 ; i < n ; i++ )
    scanf("%d", &niz[i]);
   max  = niz;
  *max = *niz;
 
  for (i = 1; i < n; i++)
  {
    if (*(niz+i) > *max)
    {
       *max = *(niz+i);
       mesto = i+1;
    }
  }
 
  printf("Najveci element je %d", *max);
  return 0;
}
