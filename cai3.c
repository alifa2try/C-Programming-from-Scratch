/*
* (Computer-Assisted Instruction: Monitoring Student Performance) More sophisticated 
* computer-assisted instruction systems monitor the student’s performance over a period of
* time. The decision to begin a new topic is often based on the student’s success with 
* previous topics. Modify 'Computer-Assisted Instruction: Reducing Student Fatigue' program
* to count the number of correct and incorrect responses typed by the student. After the 
* student types 10 answers, your program should calculate the percentage that are correct. 
* If the percentage is lower than 75%, display "Please ask your teacher for extra help.",
* then reset the program so another student can try it. If the percentage is 75% or higher,
* display " Congratulations, you are ready to go to the next level! ", then reset the 
* program so another student can try it.
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

}//end main


void multiplication(void){
	
	int x;
	int y;
	int response = 0; 
	int incorrect_response;
	int correct_response;

	
	for(int i = 1; i <= 10; i++){
	
		x = rand() % 10; 
		y = rand() % 10; 

		printf("[+] How much is %d times %d? ", x, y );
		scanf("%d", &response);

		while(response != x * y){

			incorrect_response++;
			negative_feedback();
			scanf("%d", &response);
			
		}//end while
		
		correct_response++;
		positive_feedback();

	}//end for

	
	if((float)correct_response / (correct_response + incorrect_response) < .75){

		printf("%s\n", "[-] Please ask your teacher for extra help.");
			
	}//end if

	else{

		printf("%s\n", "[+] Congratulations, you are ready to go to the next level!");
		
	}//end else	

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