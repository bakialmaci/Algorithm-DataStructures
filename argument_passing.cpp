#include <stdio.h>
 
int func(int a, int b)
{
    a += b;
    printf("a+=b is equal to %d",a);
}
int main(void)
{
    int x = 5, y = 7;
 
    func(x, y);
    
    return 0;
}
