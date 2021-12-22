// replace each string of one or more blanks by a single blank

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, nblanks;  // nblanks = number of blanks

    nblanks = 0;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++nblanks;
        } else if (c != ' '){
            if (nblanks > 0){
                putchar(' ');
                nblanks = 0;
            }
            putchar(c);            
        }
    }

   return 0;
}
