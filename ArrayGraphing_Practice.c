// graphing array element values with bar chart

#include <stdio.h>
#define SIZE 5

int main(void) {
	int a[SIZE] = {19, 3, 15, 7, 11};
	
	printf("%s%8s%20s", "Element", "Value", "Bar Chart\n");
	
	size_t i = 0;
	
	for(i = 0; i < SIZE; ++i) {
		printf("%7zu%8d%10s", i, a[i], "");
		
		int j = 0;
		for(j = 1; j <= a[i]; ++j) {
			printf("%c", '*');
		}
		puts("");
	}
}
