#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char metin[0];
    printf("Bir metin giriniz:");
    gets(metin);

    int adet=strlen(metin);
    printf("Girdiginiz metin %d adet karakterden olusmaktadir.",adet);

    getch();
}
