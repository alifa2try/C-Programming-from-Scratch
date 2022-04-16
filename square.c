//Program 17: square.c
// A C program to compute the square of even numbers from 1 to 20


#include<stdio.h>


int square(int number); //function prototype


int main(void){

	for(int x = 2; x <= 20; x += 2){

		printf("%d ", square(x)); //function call
	
	}//end for


}//end function main


int square(int number){

	return number * number;

}//end function square