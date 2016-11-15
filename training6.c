/* Laboratory 6, FEEG6002, 2016/2017, Template */

#include <stdio.h>
#include <string.h>
/* Function void rstrip(char s[])
modifies the string s: if at the end of the string s there are one or more spaces,
then remove these from the string.

The name rstrip stands for Right STRIP, trying to indicate that spaces at the 'right'
end of the string should be removed.
*/


void rstrip(char s[]) {
    /* to be implemented */
    /* for loop iterating from back find first non \0 and ' ' then record the end of the string and return the char position then iterate through to that position adding to new string to output */
	int num = 0; /* number of variables to delete */ 
	int i;
	int end;
	int count = 0;
	for (i=0; s[i]; i++){
		count++;
		if (s[i] == ' ')
			num++;
		else if (s[i] != ' ' || s[i] != '\0')
			num = 0;
	}
	end = count - num;
	s[end] = '\0';
}




void lstrip(char s[]) {
	int i;
	int num = 0;
	for (i=0; s[i]; i++){
		if (s[i] == ' ')
			num++;
		else if (s[i] != ' ' || s[i] != '\0')
			break;
	}
	memmove(s, s+num, strlen(s));
}



int main(void) {
  char test1[] = "    hello";

  printf("Original string reads  : |%s|\n", test1);
  lstrip(test1);
  printf("l-stripped string reads: |%s|\n", test1);

  return 0;
}
