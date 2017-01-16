#include<stdio.h>
struct person {
	int age; 
	double height; 
	double weight;
};

void printDetails(struct person A) {
 	printf("The age is %d.\n",A.age); 
 	printf("The height is %.1f.\n",A.height); 
 	printf("The weight is %.1f.\n",A.weight);
}

int main(void) {
	struct person BillyBob={34,1.93,85.0}; 
	printDetails(BillyBob);
	return 0;
}
