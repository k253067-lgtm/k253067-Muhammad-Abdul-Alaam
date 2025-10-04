#include <stdio.h>
#include <math.h>
int main(){
	const float fee= 250.50;
	int n_ppl=0, total=0;
	printf("Enter number of people in the group:\n");
	scanf("%d", &n_ppl);
	total= ceil((fee*n_ppl));
	printf("Total: %d", total);
	return 0;
}
