// print a histogram of the frequencues of diferent characters in its input

#include <stdio.h>

#define MAX 122
#define MIN 97
#define DIFF 32

int main(int argc, char const *argv[])
{
    int c, i, j;
    int array[MAX - MIN];

    for (i = MIN; i <= MAX; i++){
        array[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if (c >= MIN){
            ++array[c];
        } else{
            ++array[c + DIFF];
        }        
    }

    for (i = MIN; i <= MAX; i++){
        printf("|%c%c|", i - DIFF, i); 
        for (j = 1; j <= array[i]; j++){
            putchar('=');
        }
        putchar('\n');
    }    

    return 0;
}
