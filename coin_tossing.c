//Problem 6: coin_tossing.c
//Exc 5.31: This program simulates coin tossing

/*
* (Coin Tossing) Write a program that simulates coin tossing. For each toss, display Heads 
* or Tails. Let the program toss the coin 100 times, and count the number of heads and tails.
* Display the results. The program should call a function flip that takes no arguments and 
* returns 0 for tails and 1 for heads. If the program realistically simulates the coin tossing,
* then each side of the coin should appear approximately half the time for a total of 
* approximately 50 heads and 50 tails.
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int flip(void); //function prototype


int main(void){

	srand(time(NULL));

	int heads = 0, tails = 0;

	for(int i = 1; i <= 100; i++){

		int value = flip();

			if (value == 0){

				heads++;
			
			}//end if

			else if(value == 1){

				tails++;
			
			}//end else if

			else{

				printf("%d ", value);	
			
			}//end else

	}//end for

	printf("[+] After 100 toss of a coin, you have obtained %d heads and %d tails", heads, tails);

}//end main


int flip(void){

	return (rand() % 2);

}//end flip