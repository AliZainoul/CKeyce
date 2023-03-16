/*
  Compile this program by:
  - Opening a command prompt
  - Typing:
    gcc -o b bitwiseOperators.c && ./b
*/

#include <stdio.h>
// For built-in function printf


// Utility Functions
void draw_line() {
  printf("------------------------------------------------------ \n \n");
}

void print_text(const char* text) {
  printf("----------------------- %s ----------------------- \n" ,text);
}

// Main Function
int main()
{
  /*
  &=	  | 	x &= 3	  | x = x & 3
  |=	  | 	x |= 3	  | x = x | 3
  ^=	  | 	x ^= 3	  | x = x ^ 3
  >>=	  | 	x >>= 3	  | x = x >> 3
  <<=	  | 	x <<= 3	  | x = x << 3
  */

  int x = 2;
  print_text("AND &");
  printf("%d \n",(x & 3));

  print_text("OR |");
  printf("%d \n",(x | 3));

  print_text("XOR |");
  printf("%d \n",(x ^ 3));

  print_text("Comp ~ ");
  printf("%d \n",(~x));

  print_text(">> LSO");
  printf("%d \n",(x >> 3));

  print_text("<< RSO");
  printf("%d \n",(x << 3));
  draw_line();

  /*
  2
  3
  1
  0
  16
  */

  return 0;
}
