/*
  Compile this program by:
  - Opening a command prompt
  - Typing:
    gcc -o g globalVars.c && ./g
*/

#include <stdio.h>
// For built-in function printf


// Utility Function
void draw_line() {
  printf("---------------------------------------------- \n");
}


// Defining (Declaring and initializing) a GLOBAL variable
int g = 0;


// Main Function
int main()
{

  // Local variables
  // Declaration
  int i, j;

  // Initialization
  i = 1;
  j = 2;
  g = ((i+j)*3);

  printf ("Values of i, j, g are: i = %d, j = %d and globalVar = %d. \n",i,j,g);
  draw_line();
  printf("Variables i,j are local to the main function. \n");
  draw_line();
  printf("i.e. their visibility is ONLY inside the main function.  \n");
  draw_line();
  printf("Outside the main function scope, the variables i, j are destroyed, ");
  printf("hence their memory addresses are freed. \n");
  draw_line();
  printf("Whereas OUTSIDE the main function scope, variable g still exists!\n");
  printf ("This is because g is declared as a GLOBAL VARIABLE, ");
  printf ("So it's visibility is beyond the main function. \n");
  draw_line();

  return 0;
}
