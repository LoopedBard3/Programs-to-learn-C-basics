#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char** argv){
	int numberToGuess = 0;
	int upperBound = -1;
	int lastGuess = 0;
	char hardModeDecide = 'a';
	bool guessedAlready = 0;
	bool hardMode = 0;
	
	if(argc == 2){
		if(strcmp(argv[1], "-help") == 0 || strcmp(argv[1], "--help") == 0){
			printf("NumberGuess -HardMode(1 = on, 0 = off)");
			return 0;
		}else if(strcmp(argv[1], "1")==0){
			hardMode = 1;
			printf("HardMode Activated Prepare for pain!\n");
		}
	}else if(argc == 1){
		printf("Would you like to activate hardMode?\n(y/n): ");
		scanf("%c", &hardModeDecide);
		if(hardModeDecide == 'y'){
			hardMode = 1;
			printf("HardMode Activated Prepare for pain!\n");
		}
	}else{
		printf("Too many or too few arguments");
		return 0;
	}
	
	
	srand(time(NULL));
	while(upperBound <= 1){
		printf("How many possible numbers do you want?\nPossible Numbers: ");
		scanf("%d", &upperBound);
		if(upperBound <= 1){
			printf("Please choose a number greater than 1\n");
		}
	}
	
	numberToGuess = rand() % upperBound;
	
	do{
			if(hardMode){
				numberToGuess = rand() % upperBound;
			}
			if(guessedAlready){
					printf("%d was incorrect. Please try again.\nGuess(between 0 and %d): ", lastGuess, upperBound - 1);
					scanf("%d", &lastGuess);
			}else{
				printf("Guess a number between 0 and %d\nGuess: ", upperBound - 1);
				scanf("%d", &lastGuess);
				guessedAlready = 1;
			}
	}while(lastGuess != numberToGuess);
	
	printf("%d was the correct answer!! Good Guessing!!\nThanks for playing!", lastGuess);
}