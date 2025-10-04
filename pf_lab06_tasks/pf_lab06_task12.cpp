#include <stdio.h>
int main(){
	int num=0;
	printf("Enter number to check if it is even or odd:\n");
	scanf("%d", &num);
	
	if ((num&1)==0){
		printf("Number is even.");	
	}else{
		printf("Number is odd.");
	}
	
	
	return 0;
}
