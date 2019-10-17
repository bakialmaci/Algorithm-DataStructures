#include <iostream>

using namespace std;

int main(){
	char name[ ]= "Sam";
  	char *p;
  	p = name;     /* for string, only this declaration will store its base address */
  	while( *p != '\0')
  	{
    	cout << *p;
    	p++;
  	}
	return 0;
}
