/* user enter 2 integers
Print the relation between them 
X>Y or X<Y, etc. */

#include <stdio.h>
int main(){
	//variables
	int X, Y;
	//Enter two integers
	printf("Please enter two integers\n");
	scanf("%d %d", &X, &Y);
	printf("X = %d, Y = %d\n",X,Y);
	
	/* if(cond){  cond:--> true --> statements
                       --> false -->
        statements
	}*/
					   	//Print relation
	if(X>Y){
		printf(" %d > %d\n",X,Y);
	}
	if(X<Y){
		printf(" %d < %d\n",X,Y);
	}
	//X=Y ??
	if(X==Y){ // !(non-zero)
		printf(" %d = %d\n",X,Y);
	}
	if(X!=Y){
		printf(" %d != %d\n",X,Y);
	}
	// X greater or equal to Y
	if(X>=Y){
		printf(" %d >= %d\n",X,Y);
	}
	if(X<=Y){
		printf(" %d <= %d\n",X,Y);
	}
	return 0;
}
