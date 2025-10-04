#include <stdio.h>
int main(){
	const int withd_lim= 500;
	int withd_req=0;
	float rem=0;
	printf("Enter amount to withdraw in multiples of $20\n");
	scanf("%d", &withd_req);
	rem=withd_req%20;
	if ((withd_req<withd_lim)&&(rem==0)) {
		printf("Withdrawal approved.");
	}else{
		printf("Withdrawal denied.");
	}
	return 0;

}

