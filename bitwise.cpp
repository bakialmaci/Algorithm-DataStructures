#include<stdio.h>

int main()
{
    int a = 12, b = 25;   // 00001100 = a     00011001 = b     ==> 00001000 = 8 in decimal.
    printf("Output = %d", a&b);
    return 0;
}

