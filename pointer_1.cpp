#include<stdio.h>

int main(){

int a=10;

int *p;

p=&a;

printf("%d\n",*p); // p�nin g�sterdi�i yeri basar
printf("%d\n",p); // p�nin de�erini yani, p�nin g�sterdi�i yerin adresini basar
printf("%d\n",a); // a�n�n de�erini basar
printf("%d\n",&a); //a�n�n adresini basar
printf("%d\n",&p); //p�nin adresini basar

}
