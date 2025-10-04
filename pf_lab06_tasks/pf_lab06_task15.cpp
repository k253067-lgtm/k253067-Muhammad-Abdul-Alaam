#include <stdio.h>
int main(){
	int num1=0, num2=0;
	printf("Enter the two integers to swap:\n");
	scanf("%d %d", &num1, &num2);
	printf("After swap:\nFirst=%d\nSecond:%d", ((num1^num2)^((num1^num2)^num2)), ((num1^num2)^num2)); //fix var
	return 0;
}
