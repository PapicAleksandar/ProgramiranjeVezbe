#include <stdio.h>
#include <string.h>
int brojenje(char str[], char x){
   int brojac = 0;
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] == x)
        {
           brojac++;
        }

        i++;
    }

    return brojac;
}
int main()
{
    char str[50];
    char x;
    int i=0;
    int a;

    printf("Unesite string: ");
    gets(str);
    printf("Unesite karakter: ");
    scanf("%c", &x);
   while(str[i] != '\0')
    {
        i++;
    }
    a = brojenje(str[i],x);
    printf("%d", &a);

    return 0;
}
