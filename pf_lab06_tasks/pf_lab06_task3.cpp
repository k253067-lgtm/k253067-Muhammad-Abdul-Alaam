#include <stdio.h>
int main(){
	int bal=50000, withd_amt=0, choice=0;
	while (bal>0){
		printf("How much would you like to withdraw?\n");
		scanf("%d", &withd_amt);
		if ((bal-withd_amt)<0){
			printf("Insufficient balance.\n");
		}else{
			bal=bal-withd_amt;
		}
		printf("Balance remaining: %d\n", bal);
		printf("Would you like to withdraw more?[0=No/1=Yes]\n");
		scanf("%d", &choice);
		if (choice==0){
			printf("Balance remaining: %d\n", bal);
			break;
		}
	}
}
