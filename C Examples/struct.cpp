#include<stdio.h>
#include<string.h>

struct data{
	char name[20];
	char department[50];
	int id;
	int grade;
}student;


int main(){
	
	strcpy(student.name,"Baki");
	strcpy(student.department,"EEE");
	student.id=21627983;
	student.grade=1;
	
	printf("Name:%s\n",student.name);
	printf("Department:%s\n",student.department);
	printf("ID:%d\n",student.id);
	printf("Grade:%d\n",student.grade);
	return 0;
}
