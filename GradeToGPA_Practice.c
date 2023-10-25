// input grade output GPA
#include <stdio.h>

int main(){
	int G;
	printf("Please enter your grade\n");
	scanf("%d", &G);
	
	if(G > 100){
	    printf("That grade doesn't exist you typed it wrong");
	}
	else if(G >= 90 ){
		printf("Your GPA grade is A");
	}
	else if(G >= 80){
		printf("Your GPA grade is B");
	}
	else if(G >=70){
		printf("Your GPA grade is C");
	}
	else if(G >=60){
		printf("Your GPA grade is D");
	}
	else{
		printf("Your GPA grade is F");
	}
	return 0;
}
