#include <stdio.h>

/* function prototype */
long string_length(char s[]);
	

int main(void) {
  char s1[]="Hello";
  char s2[]="x";
  char s3[]="line 1\tline 2\n";

  printf("%20s | %s\n", "string_length(s)", "s");
  printf("%20ld | %s\n", string_length(s1), s1);
  printf("%20ld | %s\n", string_length(s2), s2);
  printf("%20ld | %s\n", string_length(s3), s3);
  return 0;
}

long string_length(char s[]){
	long nc=0; /* Number of Characters */ 
	int i;
	for (i=0; s[i]; i++) {
		nc ++; 
	}
	return nc;
}
