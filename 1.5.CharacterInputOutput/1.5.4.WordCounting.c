    //
    //  1.5.4 Word Counting.c
    //  C Programming
    //
    //  Created by Bruno Schneider on 01/11/13.
    //  Copyright (c) 2013 Bruno Schneider. All rights reserved.
    //

    #include <stdio.h>

    #define IN 1 /* inside a word */
    #define OUT 0 /* outside a word */

    /* count lines, words, and characters in input */

     int main ()
     {
     printf("Digite alguma coisa!");
        int c, nl, nw, nc, state;
        
        state = OUT;
        nl = nw = nc = 0;
        while ((c = getchar()) != EOF) {
            ++nc;
            if (c == '\n')
                ++nl;
            if (c == ' '|| c == '\n' || c == '\t') {
                state = OUT;
            }
            else if (state == OUT) {
                state = OUT;
                ++nw;
            }
        }
        printf("%d %d %d\n", nl, nw, nc);
     }
        /*Ex 1-12
        int c, nl, nw, nc, state;
        state = OUT;
        c = nl = nw = nc = 0;
        while ((c=getchar()) != EOF) {
            ++nc;
            if (c == '\n'){
                ++nl;
            }
            if (c == ' ' || c == '\n' || c == '\t'){
                state = OUT;
            }
            else if (state == OUT){
                if (nc != 0){
                putchar('\n');
                    }
            state = IN;
            ++nw;
        }
        if (state == IN)
        {
            putchar(c);
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}*/