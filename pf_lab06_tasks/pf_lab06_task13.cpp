#include <stdio.h>
int main(){
	int num=0, counter=0;
	printf("Enter decimal number to count 1s of in its binary form:\n");
	scanf("%d", &num);
	while(num>=1){
		if (num&1==1){
			counter= counter+1;
		}
		num=num>>1;
	}
	printf("Number of 1s in binary form=%d", counter);
	return 0;
}
