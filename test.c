#include <stdio.h> 

int main(void){
	double price =1.42;
	int n=50;
	double total =0.;
	total = n*price;
	printf("%d bottles of milk at %4.2f "\
	"each cost %4.2f in total.\n",
	n,price,total); 
	return 0;
}
