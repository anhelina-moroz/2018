#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Lab_Work_1_Functions.h"




int factorial (int value)
{
 int r;
 for (r = 1; value > 1; r *= (value--));
return r;
}


int power(int base, int C)
{
  base = 5;
  int p;
  for (p = 1; C > 0; --C)
    p *= base;
  return p;
}
