#include<iostream>
using namespace std;

int main(){
    int elemanSayisi = 10;
    int *sayilar;

    sayilar = malloc(elemanSayisi * sizeof(int));

    if( sayilar == NULL)
        fprintf(stdout, "Hata olustu");
    else
        fprintf(stdout, "Bellek alani tahsis edildi.");

    free(sayilar);
    
    return 0;
}