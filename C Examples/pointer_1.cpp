#include<stdio.h>

int main(){
int a=10;
int *p;

p=&a; //a adresindeki deðeri p'ye eþitler.

printf("%d\n",*p); // p’nin deðerini basar
printf("%d\n",a); // a’nýn deðerini basar

printf("%d\n",p); // p’nin  gösterdiði yerin(a'nýn) adresini basar
printf("%d\n",&a); //a’nýn adresini basar. p ile aynýdýr zaten.


printf("%d",&p); //p’nin adresini basar

}
