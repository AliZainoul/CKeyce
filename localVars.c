/*
  Compile this program by:
  - Opening a command prompt
  - Typing:
    gcc -o l localVars.c && ./l
*/

#include <stdio.h>
// For built-in function printf


// Utility Function
void draw_line() {
  printf("---------------------------------------------------------------- \n");
}

// Main Function
int main()
{
  // Local variables
  // Declaration
  int i, j, k;

  // Initialization
  i = 1;
  j = 2;
  k = ++j;
  j--;
  printf ("Values of i, j, k are:  i = %d, j = %d and k = %d. \n" ,i ,j ,k);
  draw_line();
  printf("All these variables i,j,k are local to the main function. \n");
  draw_line();
  printf("i.e. their visibility is ONLY inside the main function.  \n");
  draw_line();
  printf("Outside the main function scope, the variables are destroyed, ");
  printf("hence their memory addresses are freed. \n");
  draw_line();
  return 0;
}
