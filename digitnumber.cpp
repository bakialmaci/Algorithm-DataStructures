#include<stdio.h>
#include<math.h>
int main(){
	int sayi;
	printf("sayiyi giriniz: "); scanf("%d",&sayi);
	for(int i = 0;i <= 100; i++){
		if(sayi/pow(10,i) < 1){
			printf("Basamak sayisi:%d",i);
			break;
		}
	}
	return 0;
}
