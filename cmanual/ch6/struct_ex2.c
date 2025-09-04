#include <stdio.h>

int main()
{   // turn a struct into its own type
    typedef struct employee {
        char *name;
        int age;
        char *title;
    } proll_t;
    
    // intialize two instances of it
    proll_t Ryan;
    proll_t Jason;
    
    // add some values to points in multiple instances
    Ryan.name = "Pearson";
    Ryan.age = 40;
    Ryan.title = "EE";
    Jason.name = "Lochner";
    
    printf("R&D Department Members: %s and %s\n", Ryan.name, Jason.name);
    
    return 0;
}