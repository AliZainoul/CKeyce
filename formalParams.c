/*
  Compile this program by:
  - Opening a command prompt
  - Typing:
    gcc -o f formalParams.c && ./f
*/

#include <stdio.h>
// For built-in function printf


// Utility Functions
void draw_line() {
  printf("---------------------------------------------- \n");
}

int sum(int i, int j)
{
  printf ("Value of i in sum function is: i = %d \n",  i);
  printf ("Value of j in sum function is: j = %d \n",  j);
  return (i + j);
}

// Defining (Declaring and initializing) a GLOBAL variable
int i = 123;

// Main Function
int main () {
  // Defining (Declaring and Initializing) variables i,j,k
  int i = 10;
  int j = 20;
  int k = 0;

  draw_line();
  printf ("Value of i in main function is: i = %d \n",  i);
  printf ("Value of j in main function is: j = %d \n",  j);
  draw_line();

  k = sum (i, j);
  printf ("Value of k in main function is: k = sum(%d,%d) = %d \n" ,i ,j,k);
  draw_line();

  return 0;
}
