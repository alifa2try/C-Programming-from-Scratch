//Program 18: enumeration.c
//This program illustrates the use of enumeration in C


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


enum Status {CONTINUE, WON, LOST}; //constants to represent game status


int rollDice(void); //rollDice function prototype


int main(void){

	srand(time(NULL)); //randomize based on current time
	int myPoint = 0; //player must make this point to win
	enum Status gameStatus = CONTINUE;

	int sum = rollDice(); //first roll of the dice

	//determine game status based on sum of dice
	switch(sum){

		//win on first roll
		case 7:
		case 11:
			gameStatus = WON;
			break;

		//lose on first roll
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

		//remember point
		default:
			gameStatus = CONTINUE; //player should keep rolling
			myPoint = sum;
			printf("[+] Points is %d\n", myPoint);
			break;
	}//end switch

	//while game not complete
	while(CONTINUE == gameStatus){

		//determine game status
		if(sum == myPoint){

			gameStatus = WON;

		}//end if

		else if(7 == sum){

			gameStatus = LOST;
		
		}//end else if

	}//end while

	//display won or lost message
	if(WON == gameStatus){

		puts("Player wins");
	
	}//end if

	else{

		puts("Player losses");
	
	}//end else

}//end function main	


//roll dice, calculate sum and display results
int rollDice(void){

	int die1 = 1 + (rand() % 6); //pick a random die1 value
	int die2 = 1 + (rand() % 6); //pick a random die2 value

	//display results of this roll
	printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
	return die1 + die2; //return sum of dice
}//end function rollDice
