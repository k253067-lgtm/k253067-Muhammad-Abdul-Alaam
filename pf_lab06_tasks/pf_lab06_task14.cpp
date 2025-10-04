#include <stdio.h>
int main(){
	int num=0;
	printf("Enter number:\n");
	scanf("%d", &num);
	printf("Number x 2 = %d\n", (num<<1));
	printf("Number x 4 = %d\n", (num<<2));
	printf("Number x 8 = %d\n", (num<<3));
	return 0;
	
}
