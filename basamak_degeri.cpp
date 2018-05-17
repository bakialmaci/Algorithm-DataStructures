#include<stdio.h>
#include<math.h>
int main(){
	int sayi,var;
	int i = 0;
	printf("sayiyi gir: "); scanf("%d",&sayi);
	
	while(sayi/pow(10,i) > 1){
		i++;
		var = i;
	}
	
	int birler = pow(10,1);
	int son   = pow(10,var-1);
	printf("Birler basamagi %d\n",sayi%birler);
	printf("Son basamagi %d\n",sayi/son);
	
	return 0;
}
