// why does this return a nonzero value?

#include <stdio.h>

int main(void) {
    double a, b;
	a = b = 0.0;
	scanf("%lf %lf",&a , &b);
	printf("%lf", fmod(a,b)); 
}
