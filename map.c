#include "map.h"
#include <stdio.h>

void printArrayAsInt(TYPE *array, int length) {
  int i;
  for(i =0; i<length; i++) {
    printf("%d\n", array[i]);
  }
}

void map (TYPE *array, TYPE (*f)(TYPE x), int length) {
  int i;
  for(i = 0; i<length; i++) {
    array[i] = f(array[i]);
  }  
}
