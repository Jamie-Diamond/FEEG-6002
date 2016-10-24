
/* traning 2.c - a program to print celsius and farenhiet conversion.
Jamie Diamond , October 2016, University of Southampton , jd12g13@soton.ac.uk

*/
#include<stdio.h> 

int main(void){
	int Celsius;
	float Fahrenheit;
	int start = -30;
	int end = 31;
	int interval = 2;
	for (Celsius=start; Celsius<end;){ 
		Fahrenheit = Celsius * 9 / 5. + 32;
    	printf("%3d = %5.1f\n" ,Celsius, Fahrenheit);
    	Celsius = Celsius + interval;
	}
	return 0;
}
