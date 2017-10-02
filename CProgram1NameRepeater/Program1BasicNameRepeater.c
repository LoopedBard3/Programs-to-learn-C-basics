#include <stdio.h>

int main(){
	char firstName[100];
	char lastName[100];
	printf("What is your first name? \nFirst Name: ");
	scanf("%s", firstName);
	printf("What is your last name?\nLast Name: ");
	scanf("%s", lastName);
	printf("Hello %s %s, good luck to your future.", firstName, lastName);
	return 0;
}