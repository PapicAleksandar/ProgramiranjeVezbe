#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j ;
    int mat1[50][50];
    int mat2[50][50];
    printf("Unesite dimenzije matrice: ");
    scanf("%d", &a);

    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
        scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
        mat2[i][j]=mat1[j][i];


        }
        printf("\n");
    }for(i=0;i<a;i++){
        for(j=0;j<a;j++){
        printf("%d", mat2[i][j]);


        }
        printf("\n");
    }
}

