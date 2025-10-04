#include <stdio.h>
#include <math.h>
int main(){
	float H=0, R=0, L=0; //R is used in place of theta
	printf("Enter the height of the building in metres, then the angle of sun's elevation:\n");
	scanf("%f %f",&H, &R);
	L= H / tan(R);
	if (L<0){
		L= L*-1;
	}
	printf("The length of the shadow is %.2fm", L);
	return 0;
	
}
