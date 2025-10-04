#include <stdio.h>
int main(){
	int num=0, sum=0, i=1;
	bool run= true;
	while (run==true){
		printf("Enter number to add, or 0 to quit");
		scanf("%d", &i);
		if (i==0){
			run= false;
		}else{
			sum=sum+i;
		}
	}
	printf("total is %d", sum);
	return 0;
	
}
