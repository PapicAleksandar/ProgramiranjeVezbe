#include <stdio.h>
int main()
{
    int niz1[50]; int niz2[50];
    int n, i;
    printf("Unesite broj elemenata nizova: ");
    scanf("%d", &n);
    printf("Unesite elementa prvog niza: ");
    for(i=0;i<n;i++){
        scanf("%d", niz1+i);
    }
    printf("Unesite elementa drugog niza: ");
    for(i=0;i<n;i++){
        scanf("%d", niz2+i);
    }
    
    for(i=0;i<n;i++){
        *(niz1+i)=*(niz2+i)+*(niz1+i);
     }
    
    for(i=0;i<n;i++){
       printf("%d ",*(niz1+i)) ;
    }

    return 0;
}
