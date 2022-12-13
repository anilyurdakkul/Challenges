// your name surname and age from user
#include <stdio.h>

int main()
{
    char firstname[15];
    char lastname[15]; 
   
    printf("Isminizi Giriniz: ");
    scanf("%s",firstname);
    printf("Soyadinizi Giriniz: ");
    scanf("%s",lastname);
    printf("PROGRAMA HOSGELDINIZ, %s %s.",firstname,lastname);
    char age[10];
    printf("\nYasinizi Giriniz:");
    scanf("%s",age);    
    return(0);
}
