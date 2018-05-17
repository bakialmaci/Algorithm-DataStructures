#include<stdio.h>
#include<string.h>

struct student{
	char name[20];
	char surname[20];
	int id;
}data[5];


int main(){
	for(int i = 0;i <= 5;i++){
		printf("Name:");    scanf("%s",&data[i].name);
		printf("Surname:"); scanf("%s",&data[i].surname);
		printf("ID:");      scanf("%d",&data[i].id);
	}

	return 0;
}
