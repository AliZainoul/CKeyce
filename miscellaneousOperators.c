/*
  Compile this program by:
  - Opening a command prompt
  - Typing:
    gcc -o m miscellaneousOperators.c && ./m
*/

#include <stdio.h>
// For built-in function printf


// Utility Functions
void draw_line() {
  printf("---------------------------------------------- \n");
}

void print_text(const char* text) {
  printf("----------------------- %s ----------------------- \n" ,text);
}

// Main Function
int main()
{
  int i = 109;
  double d = 84.4;
  float f = 1e-10;

  printf("Size of i = %d is: sizeof(i) = %lu. \n",i ,sizeof(i));
  printf("Size of d = %f is: sizeof(d) = %lu. \n",d ,sizeof(d));
  printf("Size of f = %f is: sizeof(f) = %lu. \n",f ,sizeof(f));

  return 0;
}
