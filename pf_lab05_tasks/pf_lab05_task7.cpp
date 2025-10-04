#include <stdio.h>
int main(){
	int rating=0;
	printf("Enter your rating for the movie 'The Lion King' from 1/5 to 5/5\n");
	scanf("%d", &rating);
	switch (rating){
		case 5:
			printf("You thought the movie was excellent!");
			break;
		case 4:
			printf("You thought the movie was good.");
			break;
		case 3:
			printf("You thought the movie was average");
			break;
		case 2:
			printf("You thought the movie was poor...");
			break;
		case 1:
			printf("You thought the movie was terrible!");
			break;
		default:
			printf("your rating was outside the range, thus invalid. Was the movie that bad/good...?");
			break;
	}
	return 0;
}
