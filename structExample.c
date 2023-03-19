/*  In order to compile this program:
  - Open a command prompt
  - Type in:
  $  gcc -o s structExample.c && ./s

*/

#include <stdio.h> // for printf and/or scanf built-in functions
#include <string.h> // for strcpy built-in function

typedef struct Books
{
  int id;
  char author[30];
  char name[50];
  char description[200];
} Book;

// Utility Functions:
void printInfos(const Book* book)
{
  printf("The ID of my book is : %d \n", (*book).id);
  printf("The author of my book is: %s \n", (*book).author);
  printf("The name of my book is: %s \n", (*book).name);
  printf("The description of my book is: %s \n", (*book).description);
}

void draw_line()
{
  printf("---------------------------------------------------------------- \n");
}

int main()
{
  // Declaring and initializing a variable of type Book named book:
  Book book;

  // You access directly to members of struct book by:

  (book).id = 123;
  strcpy( (book).author, "Z. Ali");
  strcpy( (book).name, "C Programming Language");
  strcpy( (book).description, "C Programming Language Tutorial");

  printInfos(&book);
  draw_line();

  return 0;
}
