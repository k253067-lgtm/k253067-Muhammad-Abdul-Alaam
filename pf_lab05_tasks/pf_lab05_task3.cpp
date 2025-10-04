#include <stdio.h>
int main(){
	int year=0;
	float remainder=0;
	printf("Enter the year:\n");
	scanf("%d",&year);
	remainder=year%4;
	if (remainder==0){
		printf("Leap year");
	}else{
		printf("Not a leap year");
	}
	return 0;
}

