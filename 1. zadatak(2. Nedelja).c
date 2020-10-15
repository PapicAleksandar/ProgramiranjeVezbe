#include <stdio.h>

int main() {
    char ime[50]; FILE *fp;

    fp = fopen("file.txt", "a+");
    printf("Unesite vase ime:\n");
    fgets(ime,sizeof(ime),stdin);
    fprintf(fp,"%s",ime);
    fclose(fp);
}
