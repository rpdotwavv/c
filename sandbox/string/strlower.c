// Make the contents of a character array ('string') into all lower character
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  char string[] = "HELLO";
  char strUp[30] = {0};
  unsigned char check = 0;
  int length = strlen(string);

  for (int i = 0; i < 5; i++){
    check = string[i];
    if (!islower(check)){
      strUp[i] = tolower(check);
    //printf("%s\n", strUp);
    }
    else {
      if (islower(check)){
        strUp[i] = string[i];
      }
    }
  }

  printf("%s\n", strUp);

  return 0;
}
