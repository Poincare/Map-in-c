#include <stdio.h>
#include "map.h"

int f(int x) {
  return (x+1);
}

int main (void) {
  int x[] = {1, 2, 3, 4};
 
  map(x, &f, 4);  

  printArrayAsInt(x, 4);

  return 0;
}
