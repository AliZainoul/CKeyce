/*
  In order to compile this program:
  Open a command prompt and type in these two commands:
  $ gcc -o s sizes.c && ./s
*/

#include <stdio.h> // For printf built-in function

// Utility function, just in order to draw a line ...
void draw_line()
{
  printf("-------------------------------------\n");
}


// Main function
int main( int argc, char *argv[] )
{

  printf("The architecture system used for this test is %s bits\n", argv[1]);

  draw_line();
  // int specifications
  short int si = 0;
  printf("Size of short int : %lu bytes.\n",sizeof(si));
  draw_line();

  unsigned short int usi = 0;
  printf("Size of unsigned short int : %lu bytes. \n", sizeof(usi));
  draw_line();

  unsigned int ui = 0;
  printf("Size of unsigned int : %lu bytes. \n", sizeof(ui));
  draw_line();

  int i = 0;
  printf("Size of int : %lu bytes. \n", sizeof(i));
  draw_line();

  long int li = 0;
  printf("Size of long int : %lu bytes. \n", sizeof(li));
  draw_line();

  unsigned long int uli = 0;
  printf("Size of unsigned long int : %lu bytes. \n", sizeof(uli));
  draw_line();

  long long int lli = 0;
  printf("Size of long long int : %lu bytes. \n", sizeof(lli));

  unsigned long long int ulli = 0;
  printf("Size of unsigned long long int : %lu bytes. \n", sizeof(ulli));
  draw_line();


  // char specifications
  signed char sc = 0;
  printf("Size of signed char : %lu bytes. \n", sizeof(sc));
  draw_line();

  unsigned char uc = 0;
  printf("Size of unsigned char : %lu bytes. \n", sizeof(uc));
  draw_line();

  // real numbers specifications
  float f = 0.0;
  printf("Size of float : %lu bytes. \n", sizeof(f));
  draw_line();

  double d = 0.0;
  printf("Size of double : %lu bytes. \n", sizeof(d));
  draw_line();

  long double ld = 0.0;
  printf("Size of long double : %lu bytes. \n", sizeof(ld));
  draw_line();

  return 0;
}



/*
--------------------------------------------------------------------------------

On Unix like-systems, we can get the architecture by taping one of the following
commands: (copy-paste without the dollar sign)

$ uname -a
// On a 64-bit architecture system, Macos System, I get the following:
➥
--------------------------------------------------------------------------------
Darwin MacBook-Air-de-Ali.local 21.6.0
Darwin Kernel Version 21.6.0: Thu Sep 29 20:12:57 PDT 2022;
root:xnu-8020.240.7~1/RELEASE_X86_64 x86_64
--------------------------------------------------------------------------------

$ getconf LONG_BIT
// On a 64-bit architecture system, Macos System, I get the following:
➥
--------------------------------------------------------------------------------
64
--------------------------------------------------------------------------------

// To get the version of the compiler used, we type the following command:
$ gcc -v
➥
--------------------------------------------------------------------------------
Configured with:
--prefix=/Library/Developer/CommandLineTools/usr
--with-gxx-include-dir=
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/4.2.1
Apple clang version 12.0.5 (clang-1205.0.22.9)
Target: x86_64-apple-darwin21.6.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
--------------------------------------------------------------------------------


By compiling the program above on the architecture given:

$ gcc -o size sizes.c
$ ./size
➥
--------------------------------------------------------------------------------
Size of short int : 2
Size of unsigned short int : 2
Size of unsigned int : 4
Size of int : 4
Size of long int : 8
Size of unsigned long int : 8
Size of long long int : 8
Size of unsigned long long int : 8
Size of signed char : 1
Size of unsigned char : 1
Size of float : 4
Size of double : 8
Size of long double : 16
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
// PRIMITIVE DATA TYPES
  Data Type	              | Size    | Range                            |

  short int	              | 2		    | -32,768 to 32,767                |
  unsigned short int	    |	2		    | 0 to 65,535                      |
  unsigned int	 	 	 	    | 4	      |  0 to 4,294,967,295              |
  int	                    | 4	      | -2,147,483,648 to 2,147,483,647  |

  long int	 	 	 	 	 	    | 4		    | -2,147,483,648 to 2,147,483,647  |
  unsigned long int       | 4	      | 	0 to 4,294,967,295	           |
  // LONG INT AND UNSIGNED LONG INT IN MY MAC === 8 BYTES
  long long int	          | 8	      | 	-(2^63) to (2^63)-1            |
  unsigned long long int	|	8		    | 0 to 18,446,744,073,709,551,615  |

  signed char	            |	1		    | -128 to 127                      |
  unsigned char	          |	1		 	  | 0 to 255                         |
  float	                  |	4	 	    |                                  |
  double	                |	8	 	    |                                  |

  long double	            |	12	    |                                  |
  // LONG DOUBLE IN MY MAC === 16 BYTES
  wchar_t	                |	2 or 4	| 	1 wide character               |
--------------------------------------------------------------------------------
*/
