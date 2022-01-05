// print a vertical-histogram of the lengths of words in its input

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int lenfreq[11];        // Stores the freq of each length
    int c, i, j;
    int length, height;     // Stores actual length and highest freq

    length = height = 0;

    for (i = 0; i <= 10; ++i){
        lenfreq[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if (c != ' ' && c != '\n' && c != '\t'){
            ++length;
        } else if (length != 0){
            if (length <= 10){
                ++lenfreq[length-1];
                if (height < lenfreq[length-1]){
                    height = lenfreq[length-1];
                }
            } else {
                ++lenfreq[10];
                if (height < lenfreq[10]){
                    height = lenfreq[10];
                }
            }
            length = 0;
        }
    }

    printf("VERTICAL HISTOGRAM\n------------------\n");    
    for (i = height; i > 0; --i){
        printf("%2d|", i);
        for (j = 0; j <= 10; ++j){
            if (lenfreq[j] >= i){
                printf("   ¤");
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }
    
    printf("  +");
    for (i = 0; i <= 10; ++i){
        printf("----");
    }
    printf("\n   ");

    for (i = 0; i <= 10; ++i){
        if(i < 10){
            printf("%4d", i+1);
        } else {
            printf(" +10");
        }
    }
    printf("\n");

    return 0;
}
