#include <stdio.h>

unsigned char invert(unsigned x, char p, char n)
{
	unsigned char maskL, maskR, maskT;

	maskL = (~0 << (p + 1));
	maskR = ~(~0 << (p + 1 - n));
	maskT = ~(maskL | maskR);

	return  maskT ^ x; 
}

int main()
{
	unsigned bits = 171;
	char p =5, n = 2;

	printf("New byte = %u\n", invert(bits, p, n));
	
	return 0;
}
