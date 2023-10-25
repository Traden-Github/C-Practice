/*Enter X amount of grades( 0-100 )
  calculate & print average
*/
#include <stdio.h>

int main(){
	
	int grade = 0, num = 0;
	
	int sum = 0, avg =0;
	
	printf("Enter the grades of the students.(within 0 to 100 with space bars in between.)\n");
	printf("Once finished, type in a random number outside of 0 to 100 to execute!\n");
    
	while( grade >= 0 && grade <= 100){
	
	scanf("%d", &grade);
    
	if( grade >= 0 && grade <= 100){
    		sum += grade;
    		num++;
    }
    else{
    	break;
    }
    }
    avg = (sum / num );
	if( sum % num == 0){
	printf("The grade average is exactly %d", avg);
    }
    else{
    printf("The grade average is roughly %d", avg);	
    }
	return 0;
}
