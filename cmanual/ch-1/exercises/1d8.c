#include <stdio.h>

main()
{
    int c, nl, ns, nt;

    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
    }

    printf("%d %d %d\n", nl, ns, nt);
    getchar();

}