#include<stdio.h>
#include<math.h>


#define N 1000 
#define XMIN 0
#define XMAX 1





int main(void) {
	double x;
	double y;
	double y2;
	int i;
	for (i=0; i<N; i++){ /* i++ same i = i + 1 */
		x = XMIN + (XMAX - XMIN) / (N - 1.) * i;
		y = sin(x);
		y2 = cos(x);
		printf("%f %f %f\n" , x, y, y2);
	}
	return 0;
}
