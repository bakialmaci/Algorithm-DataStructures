#include <stdio.h>

int main() {
	start:
	int i,n,Arr[i],j,search;
		
	printf("Enter the number of elements in array: "); scanf("%d",&n);
	
	if(n != 0){   //Array boyutu 0 dan farkl�ysa girsin.
	printf("Enter %d integer(s)\n",n);
	
	for(i=0; i<n; i++){    //Arraydeki t�m elemanlar� tarad�m eger esitse j'ye esitledim.
		scanf("%d" , &j); 
		Arr[i] = j ;
		}	
	
	printf("Enter a number to search: "); scanf("%d" ,&search);
	for(i=0; i<=n; i++) {	
		if(Arr[i] == search) {  //Tarama sonucundaki degerin arrayde kac�nc� s�rada tutuldugunu ald�m.
			printf("Location: %d\n",i+1);
			break;
		}
		if(i==n) printf("NOT FOUND\n");
		}
	}
	goto start;
	
	return 0;
}
