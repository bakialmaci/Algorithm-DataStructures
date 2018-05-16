#include <stdio.h>
 
void swapnum(int* i, int* j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
 
int main(void)
{
    int a = 10, b = 20;
 
    // passing parameters
    swapnum(&a, &b);
 
    printf("a is %d and b is %d\n", a, b);
    return 0;
}
