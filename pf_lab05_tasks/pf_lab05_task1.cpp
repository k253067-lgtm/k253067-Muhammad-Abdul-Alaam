#include <stdio.h>
int main(){
	char choice='x';
	printf("Enter the first letter of the traffic light colour:\n");
	scanf("%c", &choice);
	if (choice == 'r') {
		printf("Red: Stop");
	}else if (choice=='y'){
		printf("Yellow:Caution");
	}else{
		printf("Green:Go");
	return 0;
	}
}
