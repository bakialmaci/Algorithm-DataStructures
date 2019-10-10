// C++ program to demonstrate working of 
// functors. 
#include <bits/stdc++.h> 
using namespace std; 

// A Functor 
class increment 
{ 
private: 
	int num; 
public: 
	increment(int n) : num(n) { } 

	// This operator overloading enables calling 
	// operator function () on objects of increment 
	int operator () (int arr_num) const { 
		return num + arr_num; 
	} 
}; 

// Driver code 
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int to_add = 5; 

	transform(arr, arr+n, arr, increment(to_add)); 

	for (int i=0; i<n; i++) 
		cout << arr[i] << " "; 
} 
