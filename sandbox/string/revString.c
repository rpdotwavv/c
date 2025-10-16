// a module to return a string in reverse order
#include <stdio.h>
#include <string.h>

int main(){
  char string[] = "hello";
  char revString[30];
  int loop = 0;
  int length = strlen(string);
  int count = length - 1;

  for (count; count > 0; count--){
    revString[loop] = string[count];
    //printf("%s\n", revString);
    loop++;
  }

  revString[length - 1] = string[0];

printf("%s\n", revString);

return 0;
}

