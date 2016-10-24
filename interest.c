/* lab 2.c - a program to calculate and print the aquired intrest over a 24month loan at 3%.
Jamie Diamond , October 2016, University of Southampton , jd12g13@soton.ac.uk
Modifications:- October 2016, Adapted to show the percentage, total interest, percantage of original debt

*/

#include<stdio.h> 

int main(void){
	float debt = 1000; /* current value of debt*/
	float orig_debt = debt; /* original value of debt*/
	int month; /* current month */
	int months = 24; /* total number of months */
	float rate = 0.03; /* intrest rate */
	float interest; 
	float total_interest;
	for (month=0; month<months;){ 
		month++;
		interest = debt * rate;
		debt = debt + interest;
		total_interest = debt - orig_debt;
    	printf("month %2.i: debt=%7.2f, interest=%2.2f, total_interest=%7.2f, frac=%6.2f%%\n", month, debt, interest, total_interest, total_interest*100/orig_debt);
	}
	return 0;
}
