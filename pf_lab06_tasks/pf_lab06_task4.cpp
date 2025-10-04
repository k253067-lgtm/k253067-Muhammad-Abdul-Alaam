#include <stdio.h>
#include <math.h>
int main(){
	int num_dig=0, divisor=0, num_orig=0, num=0, dig=0, i=0, sum=0;
	printf("Enter number of digits in the number you would like to check if Armstrong number, and then the number itself:\n");
	scanf("%d %d", &num_dig, &num_orig);
	num= num_orig;
	for (i=num_dig-1; i>=0; i--){
		divisor= pow(10, i);
		dig= num/divisor;
		sum= sum+ pow(dig, 3);
		num= num-(dig*(pow(10, i)));
	}
	if (num_orig==sum){
		printf("Number is Armstrong number");
	}else{
		printf("Number is not Armstrong number");
	}
	
	
	
	return 0;
}
