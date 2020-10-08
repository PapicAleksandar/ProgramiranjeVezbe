#include <stdio.h>
int jednaki(char *s1, char *s2){
   int i=0, flag =0;
    while(i,i<20,i++){
        if(s1[i]!=s2[i]){
            flag++;
        }
        
    }
    if(flag==0){
        return 0;
    }else{
        return 1;
    }
   
}

int main()
{
    char s1[20];
    char s2[20];
    int j;
    printf("Unesite prvi string: ");
    scanf("%s", &s1);
     printf("Unesite drugi string: ");
    scanf("%s", &s2);
    j = jednaki(*s1,*s2);
    if (j==1){
        printf("Strigovi nisu jednaki.");
    }else{
        printf("Stringovi su jednaki");
    }
   
}
