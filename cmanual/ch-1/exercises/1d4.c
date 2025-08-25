/*Write a Celsius to Fahrenheit table
and exe3 adding table headers*/
#include <stdio.h>

int main()
{
    int cels, fahr;
    int lower, upper, step;

    lower = -20;
    upper = 100;
    step = 10;

    cels = lower;

    printf("Cels\tFahr\n");
    while (cels <= upper) {
        fahr = (cels * 9) / 5 + 32;
        printf("%d\t%d\n", cels, fahr);
        cels = cels + step;
    }
}