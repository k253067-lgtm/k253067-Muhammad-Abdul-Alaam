#include <stdio.h>
int main(){
	int num=0, result=0, i=1;
	printf("Enter number to print multiplication table of it:\n");
	scanf("%d", &num);
	for (i=1; i<=10; i++){
		result= i*num;
		printf("%dx%d=%d\n", num, i, result);
	}
	return 0;
}
