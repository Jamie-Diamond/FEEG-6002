/* Laboratory 6, FEEG6002, 2016/2017, Template */

#include <stdio.h>
#include <string.h>


#define MAXLINE 1000
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

void lstrip(char s[]){
	int num = 0; /* integer where string starts */ 
	int i, i2;
	int len;
	char tmp[MAXLINE];
	strcpy(tmp, s);
	for (i=0; s[i]; i++){
		if (s[i] == ' ')
			num++;
		else
			break;
	}
	/* need length of string */
	len = 0;
	while (s[len]){len++;} 
	/* for loop moving everything one place forwards */
	i = 0;
	for(i2 = num; i2<len; i2++)
		tmp[i++] = tmp[i2];
	tmp[len-num] = '\0';
	strcpy(s, tmp);
	
}



int main(void) {
  char test1[] = "         ";

  printf("Original string reads  : |%s|\n", test1);
  lstrip(test1);
  printf("l-stripped string reads: |%s|\n", test1);
  rstrip(test1);
  printf("r-stripped string reads: |%s|\n", test1);
  return 0;
}
