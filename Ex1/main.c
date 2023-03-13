#include <stdio.h> // I want to use the builtin function printf
// #include <stdlib.h> // I want to use the builtin function scanf


// User-defined header file myMax.h
#include "lib/myMax.h"




// Declaration ==> Header file

int main()
{
  float a = 0.0, b = 0.0;
  printf("Please enter two float numbers a and b \n");
  scanf ("%f %f",&a ,&b);
  printf("The maximum value between %f and %f is %f \n", a, b, _max(a,b));

  return 0;
}
