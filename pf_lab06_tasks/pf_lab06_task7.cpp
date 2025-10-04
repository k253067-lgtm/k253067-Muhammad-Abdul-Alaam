#include <stdio.h>
int main(){
	int n25=0, n10=0, n5=0, n1=0;
	float amt=0;
	printf("Enter amount to make using coins:\n");
	scanf("%f", &amt);
	while (amt>=0.25){
		amt=amt-0.25;
		n25++;
	}
	while (amt>=0.1){
		amt=amt-0.1;
		n10++;
	}
	while (amt>=0.05){
		amt=amt-0.05;
		n5++;
	}
	while (amt>=0.01){
		amt=amt-0.01;
		n1++;
	}
	printf("Number of 25cents: %d\nNumber of 10cents: %d\nNumber of 5cents: %d\nNumber of 1cents:%d\n", n25, n10, n5, n1);
}
