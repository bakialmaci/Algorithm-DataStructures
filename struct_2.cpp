#include<stdio.h>
#include<string.h>

struct books{
	char name[20];
	char author[50];
	int price;
}
book1={"Oliver Twist","Charles Dickens",10},
book2={"Heidi","Johanna Spyri",15};


int main(){
	printf("Name:%s\n",book1.name);
	printf("Author:%s\n",book1.author);
	printf("Price:%d\n",book1.price);
	return 0;
}
