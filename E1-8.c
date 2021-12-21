// count blanks, tabs and newlines 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, blanks, tabs, nlines;

    blanks = 0;
    tabs = 0;
    nlines = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++blanks;
        }
        else if (c == '\t'){
            ++tabs;
        }
        else if (c == '\n'){
            ++nlines;
        }        
    }
    printf("blanks = %d\ntabs = %d\nnew lines = %d\n", blanks, tabs, nlines);

    return 0;
}


