/*
  Including the built-in header file stdio.h
  in order to use the built-in function printf
*/
#include <stdio.h>

/*
  Including the user-defined header file myMax.h
  in order to use get the declaration of the function _max(a,b)
*/
#include "lib/myMax.h"

// Main function
int main()
{
  float a = 0.0, b = 0.0;
  printf("Please enter two float numbers a and b \n");
  scanf ("%f %f",&a ,&b);
  printf("The maximum value between %f and %f is %f \n", a, b, _max(a,b));
  return 0;
}
