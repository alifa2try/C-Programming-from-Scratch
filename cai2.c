/*
* (Computer-Assisted Instruction: Reducing Student Fatigue) One problem in CAI environments
* is student fatigue. This can be reduced by varying the computer’s responses to hold the
* student’s attention. Modify the Computer-Assisted Instruction so that various comments
* are displayed for each answer as follows:

		Possible responses to a correct answer:
		
		Very good!
		Excellent!
		Nice work!
		Keep up the good work!
		
		Possible responses to an incorrect answer:
		
		No. Please try again.
		Wrong. Try once more.
		Don't give up!
		No. Keep trying.

* Use random-number generation to choose a number from 1 to 4 that will be used to select
* one of the four appropriate responses to each correct or incorrect answer. Use a switch
* statement to issue the responses.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void multiplication(void); // function prototype
void positive_feedback(void); //function prototype
void negative_feedback(void); //function prototype


int main(void){

	srand(time(NULL)); // seed random number generator
	multiplication(); // begin multiplication practice

} // end main


void multiplication(void){
	
	int x;
	int y;
	int response = 0; 
	
	printf("%s", "[+] Enter -1 at any time to exit the program. \n");

	while(response != -1){
	
		x = rand() % 10; 
		y = rand() % 10; 

		printf("[+] How much is %d times %d? ", x, y );
		scanf("%d", &response);

		while(response != -1 && response != x * y ){

			negative_feedback();
			scanf("%d", &response);
			
		}//end while

		
		if(response != -1){

			positive_feedback();

		}//end if	

	}//end while
		
	printf( "That's all for now. Bye.\n" );	
	
}//end function multiplication


void negative_feedback(void){
	
	switch(rand() % 4){

		case 0:
			printf("%s", "[-] No. Please try again: ");
			break;
		case 1:
			printf("%s", "[-] Wrong. Try once more: ");
			break;
		case 2:
			printf("%s", "[-] Don't give up!: ");
			break;
		case 3:
			printf("%s", "[-] No. Keep trying: ");
			break;			

	}//end switch

}//end function negative_feedback


void positive_feedback(void){

	switch(rand() % 4){

		case 0:
			printf("%s", "[+] Very good!\n\n");
			break;
		case 1:
			printf("%s", "[+] Excellent!\n\n");
			break;
		case 2:
			printf("%s", "[+] Nice work!\n\n");
			break;
		case 3:
			printf("%s", "[+] Keep up the good work!\n\n");
			break;			

	}//end switch

}//end function positive_feedback