#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fs1, *fs2, *ft;

  char ch, file1[20], file2[20], file3[20];

  printf("Unesite ime prvog fajla: ");
  gets(file1);

  printf("Unesite ime drugog fajla: ");
  gets(file2);

  printf("Unesite ime spojenog fajla: ");
  gets(file3);

  fs1 = fopen(file1, "r");
  fs2 = fopen(file2, "r");

  if (fs1 == NULL || fs2 == NULL)
  {
      printf("Greska");
      return;

  }

  ft = fopen(file3, "w");

  if (ft == NULL)
  {
    printf("Greska");
    return;


  }

  while ((ch = fgetc(fs1)) != EOF)
    fputc(ch,ft);

  while ((ch = fgetc(fs2)) != EOF)
    fputc(ch,ft);

  printf("Vasa dva u fajla su uspesno spojena u %s \n", file3);

  fclose(fs1);
  fclose(fs2);
  fclose(ft);

  return 0;
}
