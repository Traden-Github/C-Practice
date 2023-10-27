// wow you can't declare a variable in for loop now
#include <stdio.h>

int main(void) {
	int x = 10;
	
	for( int i = 1; i <= x; ++i ) {
		printf("%4d", i);
	}
}
