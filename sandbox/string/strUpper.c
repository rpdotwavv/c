// Make the contents of a character array ('string') into all upper character
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  char string[] = "hello";
  char strUp[30] = {0};
  unsigned char check = 0;
  int length = strlen(string);

  for (int i = 0; i < 5; i++){
    check = string[i];
    if (!isupper(check)){
      strUp[i] = toupper(check);
    //printf("%s\n", strUp);
    }
    else {
      if (isupper(check)){
        strUp[i] = string[i];
      }
    }
  }

  printf("%s\n", strUp);

  return 0;
}
