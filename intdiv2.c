#include<stdio.h>

int main(void){
	double celsuis;
	double fahrenheit;
	fahrenheit = 82.;
	celsuis = (fahrenheit - 32)*(5./9.);

	printf("%f degree Fahrenheit are %f degree Celsius. \n", fahrenheit, celsuis);

	return 0;
}
