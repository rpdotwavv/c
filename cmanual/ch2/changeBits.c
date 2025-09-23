#include <stdio.h>

unsigned setBits(unsigned x, int p, int n, int y)
{
	unsigned int maskL, maskR, maskT, xMasked, z;

	maskL = ~(~0 >> (p + 1));
	maskR = (~0 >> (p + 1 - n));
	maskT = maskL | maskR;

	xMasked = x & maskT;

	z = y & (~(~0 << n));

	return xMasked | (z << (p-1));


}


int main()
{
	unsigned bits = 135;
	int p = 5, n = 2, y = 3;

	printf("New byte = %u\n", setBits(bits, p, n, y));

	return 0;

}

