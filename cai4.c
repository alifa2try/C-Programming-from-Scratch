/*
(Computer-Assisted Instruction: Varying the Types of Problems) Modify the program of 
Exercise 5.52 to allow the user to pick a type of arithmetic problem to study.
An option of 1 means addition problems only, 2 means subtraction problems only, 3
means multiplication problems only and 4 means a random mixture of all these types.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// function prototypes
void multiplication(void); 
void addition(void);
void subtraction(void);
void mixed(void);
void positive_feedback(void); 
void negative_feedback(void); 


int main(void){

	srand(time(NULL)); // seed random number generator

	printf("%s", "[!] Select a category (1 = addition, 2 = subtraction," 
		   "3 = multiplication, 4 = mixed):");
	int selection;
	scanf("%d", &selection);

	switch(selection){

		case 1:
			addition();
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			mixed();
			break;			
	
	}//end switch

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

		
		if(response != -1){

			correct_response++;
			positive_feedback();

		}//end if	

	}//end for

	
	if((float)correct_response / (correct_response + incorrect_response) < .75){

		printf("%s\n", "[-] Please ask your teacher for extra help.");
			
	}//end if

	else{

		printf("%s\n", "[+] Congratulations, you are ready to go to the next level!");
		
	}//end else	

	printf( "That's all for now. Bye.\n" );	
	
}//end function multiplication


void addition(void){
	
	int x;
	int y;
	int response = 0; 
	int incorrect_response;
	int correct_response;

	
	for(int i = 1; i <= 10; i++){
	
		x = rand() % 10; 
		y = rand() % 10; 

		printf("[+] How much is %d plus %d? ", x, y );
		scanf("%d", &response);

		while(response != x + y){

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
	
}//end addition


void subtraction(void){
	
	int x;
	int y;
	int response = 0; 
	int incorrect_response;
	int correct_response;

	
	for(int i = 1; i <= 10; i++){
	
		x = rand() % 10; 
		y = rand() % 10; 

		printf("[+] How much is %d minus %d? ", x, y );
		scanf("%d", &response);

		while(response != x - y){

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
	
}//end function subtraction


void mixed(void){
	
	int x;
	int y;
	int response = 0; 
	int incorrect_response = 0;
	int correct_response = 0;

	

	
	for(int i = 1; i <= 10; i++){

		x = rand() % 10; 
		y = rand() % 10; 
		
		switch(rand() % 3){

			case 0:
				printf("[+] How much is %d plus %d? ", x, y );
				scanf("%d", &response);
				
				while(response != x + y){
					incorrect_response++;
					negative_feedback();
					scanf("%d", &response);
				}//end while

				correct_response++;
				positive_feedback();
				
				break;
			
			case 1:
			
				printf("[+] How much is %d minus %d? ", x, y );
				scanf("%d", &response);
				
				while(response != x - y){
					incorrect_response++;
					negative_feedback();
					scanf("%d", &response);
				}//end while

				correct_response++;
				positive_feedback();
				
				break;
			
			case 2:
				printf("[+] How much is %d times %d? ", x, y );
				scanf("%d", &response);
				
				while(response != x * y){
					incorrect_response++;
					negative_feedback();
					scanf("%d", &response);
				}//end while

				correct_response++;
				positive_feedback();
				
				break;		
		
		}//end switch
		
	}//end for

	if((float)correct_response / (correct_response + incorrect_response) < .75){

		printf("%s\n", "[-] Please ask your teacher for extra help.");
			
	}//end if

	else{

		printf("%s\n", "[+] Congratulations, you are ready to go to the next level!");
		
	}//end else	

	printf( "That's all for now. Bye.\n" );	

}//end function mixed


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