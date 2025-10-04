#include <stdio.h>
#include <math.h>
int main(){
	int num=0, divisor=0, i=0, num_digits=0, dig=0, sub=0, remainder=0, rvrs_num=0;
	printf("Enter number:\n");
	scanf("%d", &num);
	while (num>0){
		remainder= num%10;
		rvrs_num= (rvrs_num*10)+remainder;
		num=num/10;
		
	}
	printf("Result: %d\n", rvrs_num);
		
		
	return 0;	
	
}
