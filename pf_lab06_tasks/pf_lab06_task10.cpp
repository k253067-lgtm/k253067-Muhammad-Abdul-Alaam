#include <stdio.h>
#include <math.h>
int main(){
	float A=0, P=0, r=0;
	int n=0, t=0;
	printf("Enter in order;\nprincipal amount, annual rate, yearly compunding period divisions, time in years:\n");
	scanf("%f %f %d %d", &P, &r, &n, &t);
	A= P * pow((1+(r/n)), (n*t));
	printf("Amount=%f", A);

	return 0;	
}
