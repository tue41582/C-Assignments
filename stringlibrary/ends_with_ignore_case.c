#include "strlib6.h"

int ends_with_ignore_case(char *s, char *suff){
  int slen = 0;
  int sflen = 0;
  while (*s != '\0'){
    s++;
    slen++;
  }
  s = s-slen;
  while (*suff != '\0'){
    suff++;
    sflen++;
  }
  suff = suff-sflen;
  while (sflen > 0){
    if (toupper(suff[sflen])!= toupper(s[slen])){
      return 0;
    }
    sflen--;
    slen--;
  }
  return 1;
}
