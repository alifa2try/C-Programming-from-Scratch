//Exc 4.12: sumEven.c
//Calculates sum of even integers from 2 to 30


#include<stdio.h>


int main(void){

	int sum = 0;

	for(int i = 2; i <= 30; i += 2){

		if(i % 2 == 0){

			sum += i;
		
		}//end if

	}//end for

	printf("[+] The sum of even integers from 2 to 30 is: %d", sum);

}//end function main