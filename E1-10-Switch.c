/* replace each tab by \t, each backspace by \b and each backslash by \\ with switch statement*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;

    while((c = getchar()) != EOF){
        switch (c){
            case '\t':
                printf("\\t");
                break;
            case '\b':
                printf("\\b");
                break;
            case '\\':
                printf("\\\\");
                break;
            default:
                putchar(c);
        }
    }    

    return 0;
}
