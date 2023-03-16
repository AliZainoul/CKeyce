/*
  Compile this program by:
  - Opening a command prompt
  - Typing:
    gcc -o r relationalOperators.c && ./r
*/

#include <stdio.h>
// For built-in function printf


// Utility Functions
void draw_line() {
  printf("------------------------------------------------------------ \n \n");
}

void print_text(const char* text) {
  printf("----------------------- %s ----------------------- \n" ,text);
}

// Main Function
int main()
{
  const int a = 1;
  const int aa = 1;
  const int b = 2;
  const int bb = 3;
  const int c = 4;
  const int cc = 5;

  print_text ("== Operator");
  if( a == aa ) {
    // if (a==aa) evaluates to true, then a is indeed equals to b
    // and it will print the lines below
    printf("The variables are: a = %d and aa = %d. \n" ,a ,aa);
    printf("The variables a=%d and aa=%d are indeed equal.\n",a ,aa);
    printf("(a == aa) is evaluated to: TRUE in this example. \n");
  }
  else {
    printf("The variable a and the variable aa aren't equal. \n" );
    printf("(a == aa) is evaluated to: FALSE then. \n");
  }
  draw_line();

  print_text ("!= Operator");
  if ( a != b ) {
    // if (a!=b) evaluates to true, then a is indeed different than b
    // and it will print the lines below
    printf("The variable a=%d and the variable b=%d aren't equal. \n" ,a ,b);
    printf("(a != b) is evaluated to: TRUE in this example. \n");
  }
  else  {
    // if (a!=b) evaluates to false, so we have the equality (a==b)
    printf("The variable a=%d and the variable b=%d are equal. \n",a ,b);
    printf("(a != b) is evaluated to: FALSE then. \n");
  }
  draw_line();

  print_text ("> Operator");
  if ( b > a ) {
    // if (b>a) evalues to true, then b is strictly bigger than a
    // and it will print the lines below
    printf("The variable b=%d is strictly bigger than variable a=%d.\n",b ,a);
    printf("Which is equivalent to: \n" );
    printf("The variable a=%d is strictly lesser than variable b=%d.\n" ,a ,b);
  }
  else {
    // if (b>a) evalues to false, then (a>b)
    // which means that a is strictly bigger than b
    // and will print the lines below
    printf("The variable a=%d is strictly bigger than variable b=%d. \n",a ,b);
    printf("Which is equivalent to: \n" );
    printf("The variable b=%d is strictly lesser than variable a=%d. \n",b ,a);
  }
  draw_line();


  print_text ("< Operator");
  if ( b < c ) {
    // if (b<c) evalues to true, then b is strictly lesser than a
    // and it will print the lines below
    printf("The variable b=%d is strictly lesser than variable c=%d.\n",b ,c);
    printf("Which is equivalent to: \n" );
    printf("The variable c=%d is strictly bigger than variable b=%d.\n" ,c ,b);
  }
  else {
    // if (b<c) evalues to false, then (c<b)
    // which means that b is strictly bigger than c
    // and will print the lines below
    printf("The variable c=%d is strictly lesser than variable b=%d. \n",c ,b);
    printf("Which is equivalent to: \n" );
    printf("The variable b=%d is strictly bigger than variable c=%d. \n",b ,c);
  }
  draw_line();

  print_text (">= Operator");
  if ( a >= aa ) {
    // if (a>=aa) evalues to true, then a is strictly bigger than aa OR a=aa
    // in this case a is indeed equals to aa
    // So the condition (a>=aa) will evaluates to true
    // and it will print the line below
    printf("The variable a=%d is bigger or equals than variable aa=%d.\n",a,aa);
  }
  else {
    // if (a>=aa) evalues to false, then (a<aa)
    // which means that a is strictly lesser than aa AND are not equal
    // and will print the lines below
    printf("The variable a=%d is strictly lesser than variable aa=%d. \n",a,aa);
    printf("Which is equivalent to: \n" );
    printf("The variable aa=%d is strictly bigger than variable a=%d. \n",aa,a);
  }
  draw_line();

  print_text ("<= Operator");
  if ( b <= bb ) {
    // if (b<=bb) evalues to true, then b is strictly lesser than bb OR b=bb
    // in this case b is strictly less than bb
    // So the condition (b<=bb) will evaluates to true
    // and it will print the line below
    printf("The variable b=%d is lesser strictly than variable bb=%d.\n",b,bb);
  }
  else {
    // if (b<=bb) evalues to false, then (b>bb)
    // which means that b is strictly bigger than bb AND are not equal
    // and will print the lines below
    printf("The variable bb=%d is strictly lesser than variable b=%d. \n",bb,b);
    printf("Which is equivalent to: \n" );
    printf("The variable b=%d is strictly bigger than variable bb=%d. \n",b,bb);
  }
  draw_line();

  return 0;
}
