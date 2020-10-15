#include <stdlib.h>
#include <stdio.h>

int BrojacReci(FILE *f){
   int i = 1;
   char x;
   while ((x = fgetc(f)) != EOF){
       if (x ==' ')
           i++;
       else if(x =='\n')
           i++;
   }
   return i;
}
int main(){

   int BrojReci = 0;
   FILE *fp = fopen("file.txt", "r");
   BrojReci += BrojacReci(fp);
   printf("Broj reci je: %d", BrojReci);
   return 0;
}
