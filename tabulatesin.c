#include<stdio.h>
#include<math.h>

#define N 1000 
#define XMIN -1 
#define XMAX 1


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
