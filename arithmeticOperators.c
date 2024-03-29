/*
  Compile this program by:
  - Opening a command prompt
  - Typing:
    gcc -o a arithmeticOperators.c && ./a
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
  int a = 109;
  int b = 10;

  draw_line();
  printf("We have that a = %d, and b = %d, so : \n" ,a ,b);
  draw_line();
  printf("+ Arithmetic Operator: a + b = %d + %d = %d \n" ,a ,b ,(a+b));
  draw_line();
  printf("- Arithmetic Operator: a - b = %d - %d = %d \n" ,a ,b ,(a-b));
  draw_line();
  printf("* Arithmetic Operator: a * b = %d * %d = %d \n" ,a ,b ,(a*b));
  draw_line();
  printf("/ Arithmetic Operator: a / b = %d / %d = %d \n" ,a ,b ,(a/b));
  draw_line();
  printf("%% Arithmetic Operator: a %% b = %d %% %d = %d \n" ,a ,b ,(a%b));
  draw_line();
  printf("++ Arithmetic Operator: ++a = %d \n" ,(++a));
  draw_line();
  printf("-- Arithmetic Operator: --b = %d \n" ,(--b));
  draw_line();

  return 0;
}
