#include <stdio.h>
int main(){
	int n=0, i=0, fact=1;
	printf("Enter number of participants:\n");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		fact= fact*i;
	}
	printf("Number of arrangements possible is %d", fact);
}
