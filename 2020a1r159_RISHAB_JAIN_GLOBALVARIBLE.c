/*CREATOR: RISHAB JAIN
Program: UNDERSTANDING GLOBAL AND LOCAL VARIABLE*/

#include <stdio.h>

// DECLARING GLOBAL VARIABLE 
int a = 20;
int sum(int a, int b);
int main () 
{
  // DECLARING LOCAL VARIABLE IN MAIN FUNCTION 

  int a = 55;
  int b = 45;
  int c = 0;
  
  printf ("value of a in main() = %d\n",  a);
  c = sum( a, b);
  printf ("value of c in main() = %d\n",  c);
  return 0;
}
//function to add two integers 
int sum(int a, int b) 
{
   printf ("value of a in sum() = %d\n",  a);
   printf ("value of b in sum() = %d\n",  b);
   return a + b;
}