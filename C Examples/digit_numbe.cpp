#include<stdio.h>
#include <ctype.h>
int number;
int score;

int function(int get_num){
		int counter = 0;
		while(get_num){
		get_num /= 10;
		counter += 1 ;}
		return counter;

}

int main(){
	printf("Please enter the number:");
	scanf("%d",&number);
	printf("%d",function(number));
}


