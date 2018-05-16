#include <stdio.h>

int x;
int y = 5;

int main(){
	x = (y < 0) ? 10 : 20;
	printf("%d",x);
}
