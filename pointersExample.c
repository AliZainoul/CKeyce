/*  In order to compile this program:
  - Open a command prompt
  - Type in:
  $  gcc -o p pointersExample.c && ./p
*/

#include <stdio.h>
#include <stdlib.h>


// Utility Functions:
void printPointerInfos(const int* s)
{
  printf("The value of my pointer *pi is: %d \n", *s);
  printf("The pointer p (or address of variable pointed by pi) is: %p \n", s);
  printf("The address of my pointer &pi is: %p \n", &s);
}

void printVarInfos(const int* s)
{
  printf("The value of my variable is: %d \n", *s);
  printf("The address of my variable is: %p \n", s);
}

void draw_line()
{
  printf("---------------------------------------------------------------- \n");
}


int main()
{
  // Declaring and initializing a variable of type int named i:
  int i = 69;


  /*
    To output the value of a variable, %d format specifier is used for integers.
  */

  /*
    To output address of a variable, %p format specifier is used.
    How %p will display an address is implementation defined.
    It means that the output of %p could vary from compiler to compiler.
    An address is *always* a non-negative integer.
  */
  // Pass by reference!!
  printVarInfos(&i);
  draw_line();

  /*
    Now that we know how to manipulate variable addresses in C, let's create
    our first pointer and pointing it into the variable i.
  */

  /*
    Pointer Declaration: type_name_var* pvar;
    Here: type_name_var = int, var = i; pvar = pi;
  */
  int* pi;
  /*
    Now pi is a dangling pointer, which is dangerous. Consider always
    pointing your pointers to NULL just after the declaration.
    Another way saying it: initialize your pointers directly to NULL OR
    directly into the memory address you are interested into.
  */
  pi = NULL;
  /*
    Let's print the informations of our pointer.
  */
  /*
    Here pi points to nothing.
  */

  /*
    Let's point the pointer pi to the variable i.
  */

  pi = &i;

  /*
    Now pi is pointing to i.
    This has the consequence of:
    - pi is holding the address of the variable i;
    - *pi is holding the value of variable i;
    - &pi is the address of the variable pi,
    *WHICH IS DIFFERENT* of the address of i.
  */
  printPointerInfos(pi);
  draw_line();
  /*
    Let's now change the value of i.
  */
  printf("Before modification: i is equal to: %d \n" ,i);
  ++i;
  printf("After modification: i is equal to: %d \n" ,i);
  printVarInfos(&i);
  draw_line();
  printPointerInfos(pi);

  /*
    Let's now change the value of *pi
  */

  printf("Before modification (*pi) is equal to: %d \n" ,(*pi));
  (*pi)--;
  printf("After modification (*pi) is equal to: %d \n" ,(*pi));
  printVarInfos(&i);
  draw_line();
  printPointerInfos(pi);

  /*
    Because of the pointer was allocated in the *STACK*
    (the pointer is pointing to the local variable i, so once we are out the
    scope of the main function, the variable i, and ALSO the pointer pi will
    be destroyed), however, if you have allocated memory dynamically in the HEAP
    using malloc for instance, then you should free your memory by using free()
    built-in stdlib function !
  */


  // Setting the pointer pi to NULL: pi is now pointing to nothing.
  pi = NULL;
  /*
    But you may not write this line, automatically local vars will
    be destroyed after the main function as said.
  */

  // This is how pointers work!
  return 0;
}
