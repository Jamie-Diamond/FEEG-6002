#include <limits.h>  /* limits for integers */
#include <float.h>   /* limits for floats */
#include <stdio.h>
#include <math.h>


long maxlong(void) {
    return LONG_MAX;
}


double pow(double x, double y);

double upper_bound(long n) {
    double output;
    if (n<6) {
        int i;
        output = n;
        for (i=n-1; i>0; i = i - 1) {
            output = output * i;
        }
        output = output + 1;
    }
    else {
        double n_over_2 = n/2.;
        output = pow(n_over_2, n);    
    }
    return output;
}


long factorial(long n) {
    long output;
    int i;
    if (upper_bound(n)>maxlong()){
        output = -1;
    }
    else if (n<0){
        output = -2;
    }
    else if (n<2){
        output = 1;
    }
    else {
        output = n;
        for (i=n-1; i>0; i = i - 1) {
                output = output * i;
        }
    }
    return output;
}

int main(void) {
    long i;

    /* The next line should compile once "maxlong" is defined. */
    printf("maxlong()=%ld\n", maxlong());

    /* The next code block should compile once "upper_bound" is defined. */

    
    for (i=-10; i<25; i++) {
        printf("factorial(%ld)=%ld\n", i, factorial(i));
    }
    
    return 0;
}
