int main()
{  
    int x =1, y = 2, z[10];
    int *num; // num is a pointer
    
    num = &x;
    y = *num;
    printf("Num = %p, X = %d\n, Y = %d\n", num, x, y);
    
    *num = 0;
    printf("Num = %p, X = %d\n, Y = %d\n", num, x, y);
    
    num = &z[0];
    printf("Num = %p, X = %d\n, Y = %d\n", num, x, y);
    
    return 0;
}

/* 

Output example: 
Num = 0x7ffcf2547220, X = 1, Y = 1
Num = 0x7ffcf2547220, X = 0, Y = 1
Num = 0x7ffcf2547230, X = 0, Y = 1
*/