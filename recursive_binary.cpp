#include<stdio.h>

int binary(int);

int main(){
	int input;
	scanf("%d",&input);
	printf("%d",binary(input));
}

int binary(int x){
	if(x == 1) return 1;
	return (x%2 + 10 * binary(x/2));
}

