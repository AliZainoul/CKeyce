/*  In order to compile this program:
  - Open a command prompt
  - Type in:
  $  gcc -o i intliterals.c && ./i
*/

#include <stdio.h>

void draw_line() { printf("------------- \n"); }

int main()
{

  int a = 212;         /* Decimal: int */
  /* Legal and prints simply 212 */
  int b = 215u;        /* Decimal: int */
  /* Legal and prints 215 as unsigned integer */
  int c = 0xFeeL;
  /* Legal and prints 4078 as long (hexadecimal to decimal)
  (FEE)₁₆ = (15 × 16²) + (14 × 16¹) + (14 × 16⁰) = (4078)₁₀
  */
  int  d = 85;          /* Decimal: int */
  /* Decimal number, prints it as it is. */
  int  e = 0x4b;        /* Hexadecimal: int */
  /* Legal and prints 4078 as long (hexadecimal to decimal)
  (4B)₁₆ = (4 × 16¹) + (11 × 16⁰) = (75)₁₀
  */
  int  f = 30;          /* Decimal: int */
  int  g = 30u;         /* Decimal: unsigned int */
  int  h = 30l;         /* Decimal: long */
  int  i = 30ul;        /* Decimal: unsigned long */

  //int d = 078         /* Illegal: 8 is not an octal digit */
  //int e = 032UU       /* Illegal: cannot repeat a suffix */

  draw_line();
  printf ("a is : %d \n", a);
  draw_line();
  printf ("b is : %d \n", b);
  draw_line();
  printf ("c is : %d \n", c);
  draw_line();
  printf ("d is : %d \n", d);
  draw_line();
  printf ("e is : %d \n", e);
  draw_line();
  printf ("f is : %d \n", f);
  draw_line();
  printf ("g is : %d \n", g);
  draw_line();
  printf ("h is : %d \n", h);
  draw_line();
  printf ("i is : %d \n", i);
  draw_line();

  return 0;
}
