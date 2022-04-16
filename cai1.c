/*
* (Computer-Assisted Instruction) The use of computers in education is referred to as 
* computer-assisted instruction (CAI). Write a program that will help an elementary-school
* student learn multiplication. Use the rand function to produce two positive one-digit
* integers. The program should then prompt the user with a question, such as:
	 				"How much is 6 times 7?"
* The student then inputs the answer. Next, the program checks the student’s answer. If it’s
* correct, display the message:
	 				"Very good!" 
* and ask another multiplication question. If the answer is wrong, display the message:
	 				"No. Please try again." 
* and let the student try the same question repeatedly until the student finally gets it 
* right. A separate function should be used to generate each new question. This function
* should be called once when the application begins execution and each time the user answers
* the question correctly.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void multiplication(void); // function prototype


int main(void){

	srand( time( NULL ) ); // seed random number generator
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
		
			printf("%s", "[-] No. Please try again: ");
			scanf("%d", &response);

		}//end while

		if (response != -1){
		
			printf("%s", "[+] Very good!\n\n" );

		}//end if	

	}//end while
		
	printf( "That's all for now. Bye.\n" );	
	
}//end function multiplication