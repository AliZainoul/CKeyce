/*
  Compile this program by:
  - Opening a command prompt
  - Typing:
    gcc -o f formalParams.c && ./f
*/

#include <stdio.h>
// For built-in function printf


// Utility Function
void draw_line() {
  printf("---------------------------------------------- \n");
}

// Main Function
int main()
{
  /* local variable declaration */
int g = 10;
printf ("value of g = %d\n", g);
return 0; }
