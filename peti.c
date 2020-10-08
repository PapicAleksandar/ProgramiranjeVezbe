#include <stdio.h>

int main()
{
    int niz1[100];  int n;int i;
    printf("Unesite broj clanova niza: ");
    scanf("%d", &n);
    printf("Unosite clanove: ");
    for(i=0;i<n;i++){
        scanf("%d", niz1 + i);
    }
    printf("Brojevi deljivi sa 3 su: ");
    for(i=0;i<n;i++){
        if (*(niz1+i)%3==0){
        printf("%d ", *(niz1+i));
        }
    }
    
    return 0;
}
