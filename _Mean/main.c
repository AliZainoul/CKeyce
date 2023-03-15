#include <stdio.h>
#include <stdlib.h> // for malloc function

// Either using an array or
// Using a single variabl

// Utility function:
void print_infos(int _size, float _sum, float _mean)
{
  printf ("--------------------- \n");
  printf("The size of the inputs is: %d   \n", _size);
  printf("The sum of the inputs is: %f    \n", _sum);
  printf("The mean of the inputs is: %f   \n", _mean);
}

int main ()
{

  /*
  // Method 1: creating an array and storing elements in it
  // Declaring and defining (initializing) the size n to 0
  // The size as always a positive integer, so the choice of "unsigned int" type
  unsigned int n = 0;

  float sum = 0, mean = 0;
  // Unsigned so the size
  printf(" Please enter the size you want:  " );
  scanf("%d" ,&n);
  printf("The variable n entered is : %d \n" ,n);

  float* my_array = (float *) malloc (sizeof(float) * n);

  for (int i = 0; i < n; ++i)
  {
    printf("---------------------\n");
    printf ("Please enter the %d element :  \n" ,i+1);
    scanf ("%f", &my_array[i]);
    printf ("my_array[%d] is =  %f \n" ,i ,my_array[i]);
  }

  for (int j = 0; j < n; ++j)
  {
    sum = sum + my_array[j];
  }
  mean = sum / n;

  print_infos(n, sum, mean);

  // Because we have declared a pointer dynamically,
  // we SHOULD free the array / Pointer
  free (my_array);


  // Time Complexity : O(n)
  //  n operations in order to calculate the sum of the array

  // Space Complexity: O(n) ~>
  // n * sizeof(float) required in order to store the elements of the array.
  // ... A better solution exist!
  */

  // Method 2:
  unsigned int n = 0;
  // The size as always a positive integer, so the choice of "unsigned int" type

  float sum = 0, mean = 0, elem = 0;
  printf(" Please enter the size you want:  " );
  scanf("%d" ,&n);
  printf("The variable n entered is : %d \n" ,n);
  for (int i = 0; i < n; ++i)
  {
    printf("---------------------\n");
    printf ("Please enter the %d element :  \n", i+1);
    scanf ("%f", &elem);
    printf ("elem is =  %f for iteration %d \n", elem, i+1);

    sum += elem;
    // Same as :
    // sum = sum + elem;
  }
  mean = sum / n;
  print_infos(n, sum, mean);

  // Time Complexity : O(n)
  //  n operations in order to calculate the sum of the inputs

  // Space Complexity: O(1) ~>
  // ONLY ONE VARIABLE REQUIRED elem used in order to calculate the mean.
  // NO NEED to store the n-inputs!

  return 0;
}
