// print a horizontal-histogram of the lengths of words in its input

#include <stdio.h>

#define IN          1
#define OUT         0
#define MAXWORDLEN 10

int main(int argc, char const *argv[])
{
    int c, state, i, j, nc;
    int lengths[MAXWORDLEN + 1];

    for (i = 0; i <= MAXWORDLEN; ++i){
        lengths[i] = 0;
    }

    i = j = nc = 0;
    state = IN;
    while ((c = getchar()) != EOF){        
        ++nc;

        if (c == ' ' || c == '\n' || c == '\t'){
            --nc;
            state = OUT;
        }

        if (state == OUT){
            if (nc != 0 && nc <= MAXWORDLEN){
                ++lengths[nc];
            } 
            state = IN;
            nc = 0;            
        } 
    }

    for (i = 1; i <= MAXWORDLEN; ++i){
        printf("%2d| ", i);
        
        for (j = 0; j < lengths[i]; ++j){
            putchar('=');
        }

        putchar('\n');        
    }    
    
    return 0;
}
