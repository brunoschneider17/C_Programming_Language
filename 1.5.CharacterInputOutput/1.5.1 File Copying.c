//
//  1.5.1 File Copying.c
//  C Programming
//
//  Created by Bruno Schneider on 06/10/13.
//  Copyright (c) 2013 Bruno Schneider. All rights reserved.
//

#include <stdio.h>

/* copy input to output; 1st version

int main()
{
    int c;
    
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}
 */

/* copy input to output; 2nd version

int main()
{
    int c;
    
    while ((c = getchar() != EOF)
        putchar(c);

    return 0;
}
 */

/* Ex 1-6

int main()
{
    getchar() != EOF ? printf("True") : printf("False");
    return 0;
}
 */


/* Ex 1-7

int main()
{
    int c = EOF;
    printf("%d\n", c);
    return 0;
}
*/