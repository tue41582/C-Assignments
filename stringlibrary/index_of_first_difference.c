#include "strlib6.h"

int index_of_first_difference(char *s1, char *s2){
  int index = 0;
  while (*s1 != '\0' || *s2 != '\0'){
    if (*s1 != *s2){
      return index;
    }
    else {
      index++;
      s1++;
      s2++;
    }
  }
  return -1;
}
