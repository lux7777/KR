// print output one word per line

#include <stdio.h>

#define IN   1  // inside the word
#define OUT  0  // outside the word

int main(int argc, char const *argv[])
{
    
 int c, state;    

 state = OUT;
 while ((c = getchar()) != EOF){
    if (c == ' ' || c == '\n' || c == '\t'){
        if (state == IN){
            putchar('\n');
        }        
        state = OUT;               
    } else{        
        state = IN;               
        putchar(c);
    }    
 }

 return 0;
}

