#include<stdio.h>

int main(){
int a=10;
int *p;

p=&a; //a adresindeki de�eri p'ye e�itler.

printf("%d\n",*p); // p�nin de�erini basar
printf("%d\n",a); // a�n�n de�erini basar

printf("%d\n",p); // p�nin  g�sterdi�i yerin(a'n�n) adresini basar
printf("%d\n",&a); //a�n�n adresini basar. p ile ayn�d�r zaten.


printf("%d",&p); //p�nin adresini basar

}
