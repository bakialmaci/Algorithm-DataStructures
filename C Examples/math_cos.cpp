#include <stdio.h>     
#include <math.h>

#define PI 3.14

int main ()
{
  double param, result;
  param = 60.0;
  result = cos ( param * PI / 180.0 );
  printf ("The cosine of %.2f degrees is %.2f \n", param, result );
  return 0;
}
