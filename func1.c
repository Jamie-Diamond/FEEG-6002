#include<stdio.h>

int square (int a); 		/* function prototype*/

int main(void){
	int mynumber;
	mynumber = 4;

	printf("mynumber is %d, and mynumber squared is %d. \n",
		mynumber, square(mynumber) );

	return 0;
}

int square (int a){
	return a*a;
}
