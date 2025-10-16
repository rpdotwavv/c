// a function to see if two strings are anagrams
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparator function for qsort to sort characters
int compareChars(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

// Compares charactes to test they are the same on
// strings
int matchStrings(char char1, char char2){
  if (char1 == char2){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  char myString[] = "tugs";
  char myString2[] = "guts";
  int loopCount = 0;
  
  // first test is if boths strings are same length
  while(true) {
    if (strlen(myString) != strlen(myString2)){
      printf("These strings are not the same length!");
      break;
    }

    // Sort the string using qsort
    qsort(myString, strlen(myString), sizeof(char), compareChars);
    qsort(myString2, strlen(myString2), sizeof(char), compareChars);

    // This for loop compares the sorted strings of same length
    for(int i = 0; i <= strlen(myString); i++){
      if (matchStrings(myString[i], myString2[i])){
        loopCount++;
        continue;
      }
      else {
        break;
      }
    }
   
    // if statement makes sure all characters matched by counting 
    // times completed from the matchString function
    if (loopCount == (strlen(myString) + 1)){
      printf("These strings are anagrams!");
      break;
    }
    else {
      printf("These strings are not anagrams!");
      break;
    }
  }
  
  return 0; 
}
