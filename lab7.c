#include <string.h>
#include<stdio.h>
#include <stdlib.h>

long* make_long_array_plus(long n){
	long *pi;
  pi = (long *)malloc(sizeof(long)*n+1);
	if (pi == NULL) {
		printf("Memory allocation failed\n");
		return NULL;
	}
	return pi;
} 

long* make_fib_array(long n){
  long *p1;
  long *pointer;
  int i;
  int before = 1;
  int before_that = 0;
  pointer = make_long_array(n);
  p1 = pointer;
  if (pointer == NULL){
    return NULL;
  }
  if (n>=1){
    *pointer++ = 0;
  }
  if (n>=2){
  *pointer++ = 1;
  }
  if (n>=3){
    for (i=3; i<n+1; i++) {
      *pointer = before + before_that;
      before_that = before;
      before = *pointer;
      pointer++;
    }
  }
  return p1;
}

/*def fibs(n):
    """Given an integer number n, return a list with
    the first n fibbonnaci numbers. Assume that n>=2"""

    # create list fibs with n elements
    fibs = [0] * n

    # populate with data
    fibs[0] = 0
    fibs[1] = 1
    for i in range(2, n):
        fibs[i] = fibs[i - 1] + fibs[i - 2]
    return fibs */

void use_fib_array(long N) {
  /* N is the maximum number for fibarray length */
  long n;      /* counter for fibarray length */
  long i;      /* counter for printing all elements of fibarray */
  long *fibarray;  /* pointer to long -- pointer to the fibarray itself*/

  /* Print one line for each fibarray length n*/
  for (n=1; n<=N; n++) {
    /* Obtain an array of longs with data */
    fibarray = make_fib_array(n);

    /* Print all elements in array */
    printf("fib(%2ld) : [",n);
    for (i=0; i<n; i++) {
      printf(" %ld", fibarray[i]);
    }
    printf(" ]\n");

    /* free array memory */
    free(fibarray);
  }
}

int main(void) {
  use_fib_array(20);
  return 0;
}

/*
void strcpyone( char *s, char *t) { 
	while ((*t=*s) != ’\0’) {
		s++;
		t++; 
	}
}

void strcpy( char *s, char *t) {
 while ((*t++=*s++) != ’\0’)
; 
}
*/
