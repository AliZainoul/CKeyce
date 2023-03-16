/*
  Compile this program by:
  - Opening a command prompt
  - Typing:
    gcc -o l logicalOperators.c && ./l
*/

#include <stdio.h>
// For built-in function printf


// Utility Functions
void draw_line() {
  printf("------------------------------------------------------------ \n \n");
}

// Main Function
int main()
{
  int a = 5;
  int b = 20;
  if ( a && b ) {
    printf(" (a && b): (%d && %d) condition is true. \n" ,a ,b);
  }
  if ( a || b ) {
    printf(" (a || b): (%d || %d) condition is true. \n" ,a ,b);
  }

  // Let's change the values and set the value of a to zero
  a = 0;
  b = 10;
  if ( a && b )
  {
    printf(" (a && b): (%d && %d) condition is true. \n" ,a ,b);
  }
  else
  {
    printf(" (a && b): (%d && %d) condition is false. \n" ,a ,b);
  }

  if ( a || b ) {
    printf(" (a || b): (%d || %d) condition is true. \n" ,a ,b);
  }
  
  if ( !(a && b) )
  {
    printf(" (a && b): (%d && %d) condition is false. \n" ,a ,b);
  }

  return 0;
}
