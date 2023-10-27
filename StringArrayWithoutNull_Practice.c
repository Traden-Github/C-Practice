// considering printing a string without terminating null char
// returns non-zero value

#include <stdio.h>

int main(void) {
	char string1[5] = "";
	puts("Enter a 5 letter word to test");
	scanf("%s", string1);
	printf("%s", string1);
	puts("");
	
	char string2[4];
	size_t i = 0; 
	for(;i < 4; ++i) {
		printf("%zu %d\n", i, string2[i]);
	}
}
