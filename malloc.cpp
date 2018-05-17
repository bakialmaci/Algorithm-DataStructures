#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
   int *dizi;
	for(int j = 0;j<=1000000;j++){
		dizi=(int*)malloc(j*sizeof(int));
      	*dizi=j;
      	printf("%d\n",*dizi);
      	dizi++;
   		}
}
