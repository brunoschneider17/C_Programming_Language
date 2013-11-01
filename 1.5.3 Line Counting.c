//
//  1.5.3 Line Counting.c
//  C Programming
//
//  Created by Bruno Schneider on 06/10/13.
//  Copyright (c) 2013 Bruno Schneider. All rights reserved.
//

#include <stdio.h>

/* count lines in input

int main()
{
    int c, nl;
    
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
 */

/* Ex 1-8
 
int main()
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n'|| c == '\t' || c == ' ')
            ++nl;
    printf("%d\n", nl);
    return 0;
}
 */

/* Ex 1-9
int main()
{
    int c = getchar();
    while (c != EOF) {
        if (c == ' ')
            c = ' ';
    }
    putchar(c);
}
 */

/* Ex 1-10

int main()
{
    printf("Enter a char: ");
    int c = getchar();
    
    if (c == '\t')
    
    return (0);
}
*/