#include <stdio.h>
#include <ctype.h>

int main()
{
	int a, b, c, x, y, z;

	printf("Type an integer: \n");
	a = getchar() - '0';
	getchar(); //this clears getchar function of the '\n' and enter?

	printf("Type another integer: \n");
	b = getchar() - '0'; //subtracts '0' value to convert ASCII to num

	//calulations on entered values
	c  = a + b;
	x = a - b;
	y = a * b;
	z = a % b;

	printf("%d is the sum of %d and %d\n", c, a, b);
	printf("%d is the difference of %d and %d\n", x, a, b);
	printf("%d is the product of %d and %d\n", y, a, b);
	printf("%d is the quotient of %d and %d\n", z, a, b);

	return 0;
}	
