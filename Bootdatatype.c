// In programming, you often need to know if something is true or false.
// For this, we can have variables containing just one of these two values - True or False.
// When the value is returned or printed, true = 1 and false = 0.
// These variables are called "bool" or "boolean variables".
// We will look at applications of these in later modules.
// The header stdbool.h in the C Standard Library for the C programming language contains four macros for a Boolean data type.

#include <stdio.h>
#include <stdbool.h>

int main() {

  bool x = true;
  bool y = false;
  printf("%d\n", x);
  printf("%d", y);  
  
}
