#include <stdio.h>

int main()
{   // create struct
    struct employee {
        char *name;
        int age;
        char *title;
    };
    
    // initialize instances of struct
    struct employee e1;
    struct employee e2;
    
    //assign values to varaiables in each instance
    e1.name = "Ryan";
    e1.age = 40;
    e1.title = "EE";
    
    e2.name = "Jason";
    e2.age = 51;
    e2.title = "ME";
    
    // example of adding two points from each stuct instance together
    int ageComb = e1.age + e2.age;
    
    printf("%s and %s \n", e1.name, e2.name);
    printf("They're combined age is\n%d", ageComb);

    return 0;
}