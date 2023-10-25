// if statement practice

#include <stdio.h>

int main(){
	int WTF_VALUE;
	printf("Welcome to White Space\nYou have been living here for as long as you can remember\nPlease choose a number between 1 and 13\n");
	scanf("%d", &WTF_VALUE);
	if(WTF_VALUE >= 10){
		printf("Sunny, I Love You\n");
	}
	if(WTF_VALUE >= 7){
		printf("Everything will be okay\n");
	}
	if(WTF_VALUE >=4){
		printf("Oyasumi, oyasumi, close your eyes and you'll leave this dream");
	}
	if(WTF_VALUE ==1){
		printf("I Omor");
	}
	if(WTF_VALUE >13 || WTF_VALUE < 1){
		printf("Oops, Try Again\n");
	}
	return 0;
}
