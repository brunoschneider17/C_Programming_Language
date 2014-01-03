//
//  1.5.2.CharacterCounting.c
//  C Programming
//
//  Created by Bruno Schneider on 06/10/13.
//  Copyright (c) 2013 Bruno Schneider. All rights reserved.
//

#include <stdio.h>

/* count characters in input; 1st version

int main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}
*/

/* count characters in input; 2nd version

int main()
{
    double nc;
    
    for (nc = 0; getchar() != EOF; ++nc)
        ;
        printf("%.0f\n", nc);
    
    return 0;
}
*/