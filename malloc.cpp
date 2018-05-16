#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

   int *dizi,i;

   dizi=(int*)malloc(20*sizeof(int));

   for(i=0;i<=20;i++){
      *dizi=i;
      printf("%d\n",*dizi);
      dizi++;
   }
    getch();
}
