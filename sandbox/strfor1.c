#include <stdio.h>
#include <string.h>

int main() {
	int i,l;
	char str[20];

	printf("Type a string with no spaces.\n");

	scanf("%s", &str);



	l = strlen(str); /* found in string.h header file */
	i = 0;

	/* print characters from the string array on new line */
	for (i = 0; i < l; ++i)
		printf("%c\n", str[i]);
}