// count blanks, tabs and newlines //

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, b, t, n;

    b = 0;
    t = 0;
    n = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++b;
        }
        if (c == '\t'){
            ++t;
        }
        if (c == '\n'){
            ++n;
        }        
    }
    printf("blanks = %d\ntabs = %d\nnew lines = %d\n", b, t, n);

    return 0;
}


