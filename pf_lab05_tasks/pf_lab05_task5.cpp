#include <stdio.h>
int main(){
	int num=0;
	printf("Enter number to check if it is divisible by both 3 and 5:\n");
	scanf("%d", &num);
	if ((num%3==0)&&(num%5==0)){
		printf("Number is divisible by both 3 and 5.");
	}else{
		printf("Number is NOT divisible by both 3 and 5.");
	}
}
