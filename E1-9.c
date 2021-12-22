// replace each string of one or more blanks by a single blank

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, numb;  // numb = number of blanks

    numb = 0;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++numb;
        } else if (c != ' '){
            if (numb >= 1){
                putchar(' ');
                numb = 0;
            }
            putchar(c);            
        }
    }

   return 0;
}
