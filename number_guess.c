//Problem 7: number_guess.c
//Exc 5.32

/*
*(Guess the Number) Write a C program that plays the game of “guess the number” as follows:
*Your program chooses the number to be guessed by selecting an integer at random in the 
*range 1 to 1000. The program then types:

	I have a number between 1 and 1000.
	Can you guess my number?
	Please type your first guess.

* The player types a first guess. The program responds with one of the following:

	1. Excellent! You guessed the number! Would you like to play again (y or n)?
	
	2. Too low. Try again.
	
	3. Too high. Try again.	

*If the guess is incorrect, your program should loop until the player guesses the number.
*Your program should keep telling the player Too high or Too low to help the player 
*“zero in” on the correct answer.

*/


#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void guessGame(void); //function protype


int main(void){

	srand(time(NULL));

	guessGame();

}//end main


void guessGame(void){

	int response;
	
	do{

		printf("%s", "[+] I have a number between 1 and 1000. Can you guess my number?\n");
		printf("%s", "[+] Please type your first guess: ");

		int value = 1 + (rand() % 1000); //generate a random number
		int guess; 

		scanf("%d", &guess);

		while(guess != value){

			if(guess < value){

				printf("%s", "[-] Too low. Try again: ");
			
			}//end if

			else{

				printf("%s", "[-] Too high. Try again: ");
			
			}//end else

			scanf("%d", &guess);

		}//end while


		if(guess == value){

			printf("%s", "[+] Excellent! You guessed the number!\n");
			printf("%s", "[+] Would you like to play again (y = 1 or n = 2)?: ");
			scanf("%d", &response);

		}//end if	
			
	}while(response != 2);

}//end function guessGame
