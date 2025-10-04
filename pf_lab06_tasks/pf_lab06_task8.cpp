#include <stdio.h>
#include <math.h>
int main(){
	const int S=5;
	float I=0, M=0;
	printf("Enter the intensity of the earthquake:\n");
	scanf("%f", &I);
	M=log10((I/S));
	printf("The magnitude of the earthduake is %.1f", M);
	return 0;
}
