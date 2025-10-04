#include <stdio.h>
int main(){
	int num1=0;
	int num2=0;
	int max=0;
	printf("Enter 2 numbers to find the highest one\n");
	scanf("%d %d", &num1, &num2);
	max= (num1>num2)?num1:num2;
	printf("The highest number is %d", max);
	return 0; 
}
