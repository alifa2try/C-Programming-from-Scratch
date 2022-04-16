/*
* (Guess the Number Modification) Modify the guess the number program to count the number 
* of guesses the player makes. If the number is 10 or fewer, print "Either you know the 
* secret or you got lucky!" If the player guesses the number in 10 tries, then print 
* "Aha! You know the secret!" If the player makes more than 10 guesses, then print 
* "You should be able to do better!" Why should it take no more than 10 guesses? Well, 
* with each “good guess” the player should be able to eliminate half of the numbers. Now 
* show why any number 1 to 1000 can be guessed in 10 or fewer tries.
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
	int guessCount = 0; //to keep track of the number of guesses 
	
	
	do{

		int value = 1 + (rand() % 1000); //generate a random number

		printf("%s", "[+] I have a number between 1 and 1000. Can you guess my number?\n");
		printf("%s", "[+] Please type your first guess: ");
		int guess; 
		scanf("%d", &guess);

		guessCount++;

		while(guess != value){

			if(guess < value){

				printf("%s", "[-] Too low. Try again: ");
			
			}//end if

			else{

				printf("%s", "[-] Too high. Try again: ");
			
			}//end else

			scanf("%d", &guess);
			guessCount++;

		}//end while


		if(guess == value){

			printf("%s\n", "[+] Excellent! You guessed the number!");

			if(guessCount < 10){

				printf("%s\n", "[+] Either you know the secret or you got lucky!");

			}//end if

			else if(guessCount == 10){

				printf("%s\n", "[+] Aha! You know the secret!");
			}

			else{

				printf("%s\n", "[+] You should be able to do better!");
			}


			
			printf("%s", "[+] Would you like to play again (y = 1 or n = 2)?: ");
			scanf("%d", &response);

		}//end if	
			
	}while(response != 2);

}//end function guessGame
