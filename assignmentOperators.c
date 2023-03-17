/*
  Compile this program by:
  - Opening a command prompt
  - Typing:
    gcc -o a assignmentOperators.c && ./a
*/

#include <stdio.h>
// For built-in function printf

#include <stdlib.h>
// For built-in function malloc

#include <string.h>
// For string literals

#define tSize(ARRAY) (sizeof(ARRAY)/sizeof(ARRAY[0]))
// Preprocessor function in order to know the size of an array in compile-time.


// Utility Functions
void draw_line() {
  printf("------------------------------------------------------ \n \n");
}

void print_text(const char* text) {
  printf("----------------------- %s ----------------------- \n \n" ,text);
}

int ipow (int base, int exp)
{
  int result = 1;
  for (;;)
  {
    if (exp & 1)
    {
      result *= base;
    }
    exp >>= 1;
    if (!exp)
      break;
    base *= base;
  }
  return result;
}

/*
int toInt (const char* bitString)
{
  int sLength = bitString.length();
  int tempInt;
  int num = 0;
  for (int i = 0; i < sLength; i++)
  {
    tempInt = bitString[i] - '0';
    num += tempInt * ( ipow ( 2, ( sLength -1 - i ) ) );
  }
  return num;
}
*/


int get_bit(int k, int n)
{
  return ((n & ( 1 << k )) >> k);
}

int *get_bits(int n)
{
  int bitswanted = 16;
  int *bits = (int*) malloc(sizeof(int) * bitswanted);
  for (int k = 0; k < bitswanted; k++)
  {
    bits[k] = get_bit(k,n);
  }
  return bits;
}

void print_bits(int* bits)
{
  int size_array_bits = 16;
  for (int i = size_array_bits - 1; i >= 0; i--)
  {
    printf("%d",  bits[i]);
    if ((i)%4 == 0)
      printf("\t");
  }
  printf("\n");
}
// Main Function
int main()
{
  // Declaring and initializing variable i to 11
  int i = 11;
  // Declaring variable j
  // j contains garbage value until now
  int j;
  print_text("Initial value");
  printf("Initial value of j = %d\n"  ,j);

  j = i;
  // Same as: j = i = 11
  print_text("= Assignement Operator");
  printf("= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  j+= i;
  // Same as: j = j + i = 11 + 11 = 22
  print_text("+= Operator");
  printf("+= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  j-= i;
  // Same as: j = j - i = 22 - 11 = 11
  print_text("-= Operator");
  printf("-= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  j*= i;
  // Same as: j = j * i = 11 * 11 = 121
  print_text("*= Operator");
  printf("*= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  j/= i;
  // Same as: j = j / i = 121 / 11 = 11
  print_text("/= Operator");
  printf("/= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  j = 339;
  // Same as: j = 339
  printf("Changing the value of j to j = %d \n",j);
  print_bits(get_bits(j));

  j%= i;
  // Same as: j = j % i = 339 % 11 = 9 = 0000 1001 in Binary
  print_text("%= Operator");
  printf("%%= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  j<<= 4;
  // Same as: j = j << 4 = 1001 0000 in Binary = 144 in Decimal
  print_text("<<= Operator");
  printf("<<= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  j>>= 5;
  // Same as: j = j >> 5 = 0000 0100 in Binary = 4 in Decimal
  print_text(">>= Operator");
  printf(">>= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  j&= 6;
  // Same as: j = j & 6
  //            = (0000 0100 in Binary) & (0000 0110 in Binary)
  //            = (0000 0100 in Binary)
  //            =  4 in Decimal
  print_text("&= Operator");
  printf("&= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  j^= 7;
  // Same as: j = j ^7
  //            = (0000 0100 in Binary) ^ (0000 0111 in Binary)
  //            = (0000 0011 in Binary)
  //            = 3 in Decimal
  print_text("^= Operator");
  printf("^= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  j|= 8;
  // Same as: j = j | 8
  //            = (0000 0011 in Binary) | (0000 1000 in Binary)
  //            = (0000 1011 in Binary)
  //            = 11 in Decimal
  print_text(" |= Operator");
  printf("|= Operator: Value of j = %d\n", j);
  print_bits(get_bits(j));

  return 0;
}
