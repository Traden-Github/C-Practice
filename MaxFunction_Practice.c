// creating a max function
#include <stdio.h>

int max(int x, int y, int z);
int main(void) {
	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	
	printf("%s", "Enter three integers.\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("The max value is: %d\n", max(num1, num2, num3));
	
}
int max(int x, int y, int z) {
		int max = x;
		if(y>x) {
			max = y;
		}
		if(z>y) {
			max = z;
		}
		return max;
	}
