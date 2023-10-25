/* Print a message on screen ( printf )
   Next, get two numbers from user.
   Then print summation.
   */

#include <stdio.h>

int main(){
	printf("Hi! Lets play a game!\n");// print a message on screen
	// declare 3 int variables
	/* rules for variable names:
	1. case sensitive
	2. 31 characters
	3. letters, numbers,  _ sign
	4. cannot begin with numbers
	*/
	int N1; // can not be 1n
	int N2, Sum;
	
	//user enter two integers
	printf("Enter two integers.\n");
	scanf("%d %d",&N1,&N2);
	//printf("Enter integer one:\n");
	//_N1=1;
	//scanf("%d",&N1);
	
	//printf("Enter integer two:\n");
	//N2=2;
	//scanf("%d",&N2);
	
	Sum=N1 + N2;
	
	printf("%d + %d = %d \n", N1, N2, Sum);
	
	
	return 0;
}
