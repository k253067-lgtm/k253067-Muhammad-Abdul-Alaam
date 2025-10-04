#include <stdio.h>
	int main(){
	int age=0;
	printf("Enter your age:\n");
	scanf("%d", &age);
	if (age<60){
		if (age<18) {
			if (age<13){
				printf("You are a child");
			}else{
				printf("You are a teenager");
			}
		}else{
			printf("You are an adult");
		}
	}else{
		printf("You are a senior");
	}
	return 0;
}

