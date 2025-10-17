// my simple toLower program compared to x86-64 gcc 15.2 asm via godbolt.org
//
//
int main(){                                 //  push    rbp
                                            //  mov     rbp, rsp

  char ogChar = 'H';                        //  mov     BYTE PTR [rbp-1], 72
  char newChar;
  if (ogChar < 90){                         //  cmp     BYTE PTR [rbp-1], 89
                                            //  jg      .L2                                                                                       
  
    return newChar = ogChar + 32;           //  movzx   eax, BYTE PTR [rbp-1]
                                            //  add     eax, 32
                                            //  mov     BYTE PTR [rbp-2], al
                                            //  movsx   eax, BYTE PTR [rbp-2]
  }
  return 0;  // .LBB0_2                     //  mov     eax, 0
}            // .LBB0_3                     //  pop     rbp
                                            //  ret

