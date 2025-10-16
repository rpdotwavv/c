// my own toupper module
#include <stdio.h>

int main(){
  char ogChar = 'H';
  char newChar;

  //printf("%d\n", ogChar);
  if (ogChar < 90){
    newChar = ogChar + 32;
    printf("%c\n", newChar);
  }
  return 0;
}
