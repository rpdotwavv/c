// my simple toLower program compared to x86-64 clang 21.1.0 asm via godbolt.org
//
//
int main(){                                 // push    rbp
                                            //  mov     rbp, rsp
                                            //  mov     dword ptr [rbp - 4], 0


  char ogChar = 'H';                        //  mov     byte ptr [rbp - 5], 72
  char newChar;
  if (ogChar < 90){                         //  movsx   eax, byte ptr [rbp - 5]
                                            //  cmp     eax, 90
                                            //  jge     .LBB0_2
    
    return newChar = ogChar + 32;           //  movsx   eax, byte ptr [rbp - 5]
                                            //  add     eax, 32
                                            //  mov     byte ptr [rbp - 6], al
                                            //  movsx   eax, al
                                            //  mov     dword ptr [rbp - 4], eax
                                            //  jmp     .LBB0_3
  }
  return 0;  // .LBB0_2                     //  mov     dword ptr [rbp - 4], 0
}            // .LBB0_3                     //  mov     eax, dword ptr [rbp - 4]
                                            //  pop     rbp

                                            //  ret


