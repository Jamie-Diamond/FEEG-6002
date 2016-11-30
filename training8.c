#include <string.h>
#include<stdio.h>
#include <stdlib.h>


char* make_char_array(char *n){
	char *pi;
	int i=0;
	while (n[i] != '\0'){
		i++;
	}
  	pi = (char *)malloc(sizeof(char)*i*2+sizeof(char));
	if (pi == NULL) {
		printf("Memory allocation failed\n");
		return NULL;
	}
	return pi;
}

char* mix(char *s1, char *s2){
	char *point;
	char *start;
	int i = 0;
	point = make_char_array(s1);
	start = point;
	while (s1[i] != '\0'){
		*point++ = s1[i];
		*point++ = s2[i++];
	}
	*point = '\0';
	return start;
}


void use_mix(void) {
    char s1[] = "Hello World";
    char s2[] = "1234567890!";

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    mix(s1, s2);
    printf("r  = %s\n", mix(s1, s2));
}

int main(void) {
  use_mix();
  return 0;
}
