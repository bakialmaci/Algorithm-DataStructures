#include<stdio.h>

int binary(int);

int main(){
	int input;
	scanf("%d",&input);
	binary(input);
}

int binary(int x){
	if(x == 1) return 1;
	printf("%d",x%2);
	return (binary(x/2));
}

