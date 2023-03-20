/*
  Compile this program by:
  - Open a command prompt
  - Typing:
    gcc -o a arrayExample.c && ./a
*/

#include <stdio.h> // For built-in printf function


// Utility functions:

int main()

{
  // CONST keyword in order to say to the compiler that this particular value
  // *MUST NOT* change over runtime.
  const unsigned int N = 10;
  unsigned int index = 0;

  // Defining my array (Declaring it and Initializing it)
  float A[N] = {2, 6, 8, 1, 3, 5, 3.2, 2.1, 4.3, 0.333};

  // The array is declared as static. So the size is fixed at compile-time.

  for (index = 0; index < N; ++index)
  {
    printf("Element %d of my array A[%d] is equals to: %f \n" ,index ,index, A[index]);
  }

  return 0;
}
