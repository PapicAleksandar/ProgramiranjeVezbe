#include <stdlib.h>
#include <stdio.h>

int BrojacKaraktera(FILE *f, char c){
   int i = 1;
   char x;
   while ((x = fgetc(f)) != EOF){
       if(x ==c)
           i++;
   }
   return i;
}
int main(){

   int BrojChar = 0; char c;
   printf("Unesite trazen karakter: ");
   scanf("%c",&c);
   FILE *fp = fopen("file.txt", "r");
   BrojChar += BrojacKaraktera(fp, c);
   printf("Broj ponavljanja %c je %d", c,BrojChar);
   return 0;
}
