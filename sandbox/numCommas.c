#include <stdio.h>
#include <string.h>

void grpNum(int, int, char *, char *);

int main(){
  char rawNum[20] = "12345";
  char catNum[30] = {0};
  int length = strlen(rawNum);
  int count = length % 3;
  int leadingDigits;

  if (count == 0){
    leadingDigits = 3;
  }
  if (count != 0){
    leadingDigits = count;
  }
  grpNum(length, leadingDigits, rawNum, catNum);

  printf("Original number: %s\n", rawNum);
  printf("Formatted number: %s\n", catNum);

  return 0;
  }

void grpNum(int len, int loops, char *powers, char *concat){

  int loopCount = 0;
  int indexA, indexB;
  indexA = indexB = 0;

  while (loopCount <= len){
    for (int i = 0; i < loops; i++){
      concat[indexA] = powers[indexB];
      indexA++;
      indexB++;
      loopCount++;
      printf("%d\n", loopCount);
    }
    if (loopCount >= len){
      break;
    }
    concat[indexA] = ',';
    indexA++;
    loops = 3;
  
    printf("%d\n", loopCount);
  }

}
