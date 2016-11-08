#include<stdio.h>
#include<math.h>

#define N 10 
#define XMIN 1 
#define XMAX 10


int main(void) {
	double x;
	double y;
	int i;
	for (i=0; i<N; i++){ /* i++ same i = i + 1 */
		x = XMIN + (XMAX - XMIN) / (N - 1.) * i;
		y = sin(x);
		printf("%f %f\n" , x, y);
	}
	return 0;
}
