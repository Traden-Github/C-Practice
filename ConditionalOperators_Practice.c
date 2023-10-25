// practicing the ?: operator
#include <stdio.h>

int main(){
	int X;
	printf("Please enter your grade.\n");
	scanf(" %d", &X);
	
	printf( "%s\n", X >= 60 ? "Passed":"Failed");
}
