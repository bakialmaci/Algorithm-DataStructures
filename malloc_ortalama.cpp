#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ortalama;
	ortalama = (int*)malloc(0*sizeof(int));
		
	int first = 70;
	int second = 80;
	int third = 65;
	
	ortalama[1] = (first+second+third)/3;
	printf("ortalama:%d",ortalama[1]);
	free(ortalama);
	
	return 0;
}
