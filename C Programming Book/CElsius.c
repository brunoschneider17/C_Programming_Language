//
//  CElsius.c
//  C Programming
//
//  Created by Bruno Schneider on 06/10/13.
//
//

#include <stdio.h>

/* Print */

main () 
{
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}