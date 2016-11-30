#include<stdio.h>
/* TIMING CODE BEGIN (We need the following lines to take the timings.) */
#include<stdlib.h>
#include<math.h>
#include <time.h>
clock_t startm, stopm;
#define RUNS 1
#define START if ( (startm = clock()) == -1) {printf("Error calling clock");exit(1);}
#define STOP if ( (stopm = clock()) == -1) {printf("Error calling clock");exit(1);}
#define PRINTTIME printf( "%8.5f seconds used .", (((double) stopm-startm)/CLOCKS_PER_SEC/RUNS));
/* TIMING CODE END */

double F(double x){
	double f;
	f = 1 - pow(x,2);
	f = sqrt(f);
	return f;
}

double Pi(long n){
	double a = -1;
	double b = 1;
	double h = (b-a)/n;
	double x;
	double pi;
	double s;
	int i;
	s = 0.5 * F(a) + 0.5 * F(b);
	for (i=0; i<n; i++){
	    x = a + i*h;
	    s = s + F(x);
	}
	pi = s * h * 2;
	return pi;
}


int main(void) {
    /* Declarations */
	long n = 10000000;
	
    /* Code */

    START;               /* Timing measurement starts here */
    /* Code to be written by student, calling functions from here is fine
       if desired
    */
	printf("Pi = %.90f\n", Pi(n));
	
    STOP;                /* Timing measurement stops here */
    PRINTTIME;           /* Print timing results */
    return 0;
}
