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
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0)
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}