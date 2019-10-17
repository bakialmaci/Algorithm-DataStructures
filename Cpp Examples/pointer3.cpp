/***
References are less powerful than pointers

1) Once a reference is created, it cannot be later made to 
    reference another object; it cannot be reseated. 
    This is often done with pointers.

2) References cannot be NULL. Pointers are often 
    made NULL to indicate that they are not pointing 
    to any valid thing.

3) A reference must be initialized when declared. 
    There is no such restriction with pointers
***/

#include <iostream> 
using namespace std;

// Driver program 
int main()
{
	// Declare an array 
	int v[3] = { 10, 100, 200 };

	// Declare pointer variable 
	int* ptr;

	// Assign the address of v[0] to ptr 
	ptr = v;

	for (int i = 0; i < 3; i++)
	{
		cout << "Value of *ptr: " << *ptr << endl;
		cout << "Address of ptr: " << ptr << endl;
		// Increment pointer ptr by 1 
		ptr++;
	}
}

/*
Value of *ptr: 10
Value of ptr: 00CFFBC8
Value of *ptr: 100
Value of ptr: 00CFFBCC
Value of *ptr: 200
Value of ptr: 00CFFBD0
*/