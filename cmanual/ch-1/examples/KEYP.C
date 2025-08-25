#include <stdio.h>

int main() {
    int k;

    k = 0;
    printf("Hit 'Q' to quit this loop, 'J' to hear a joke.\n\n");

    while (k != 'q') {
	k = getchar();
	if (k == 'j')
	   printf("You're life... that's the joke.\n");
    }
}