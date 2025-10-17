#include <stdio.h>
#include <ctype.h>

int main(){
  char ogChar = 'H';

  if (isupper(ogChar)){
    printf("%c\n", tolower(ogChar));
  }

  return 0;
  }
