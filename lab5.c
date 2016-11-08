#include <stdio.h>
#define MAXLINE 1000 /* maximum length of string */

/* function prototype */
void reverse(char source[], char target[]);
long string_length(char s[]);

int main(void) {
  char original[] = "123456 This is a test: can you print me in reverse character order? 654321";
  char reversed[MAXLINE];

  printf("%s\n", original);
  reverse(original, reversed);
  printf("%s\n", reversed);
  return 0;
}

/* reverse the order of characters in 'source', write to 'target'.
   Assume 'target' is big enough. */
void reverse(char source[], char target[]) {
	int i;
	int b;
	int len = string_length(source);
	for (i=0; source[i]; i++) {
		b = len - 1 - i;
		target[i] = source[b];
	}
}

long string_length(char s[]){
	long nc=0; /* Number of Characters */ 
	int i;
	for (i=0; s[i]; i++) {
		nc ++; 
	}
	return nc;
}
