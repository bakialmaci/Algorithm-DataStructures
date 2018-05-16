#include<stdio.h>

int main(){

int a=10;

int *p;

p=&a;

printf("%d\n",*p); // p’nin gösterdiði yeri basar
printf("%d\n",p); // p’nin deðerini yani, p’nin gösterdiði yerin adresini basar
printf("%d\n",a); // a’nýn deðerini basar
printf("%d\n",&a); //a’nýn adresini basar
printf("%d\n",&p); //p’nin adresini basar

}
