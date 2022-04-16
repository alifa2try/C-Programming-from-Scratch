//Exc 4.13: Product of odd integers
//Compute odd integers from 1 to 15


#include<stdio.h>


int main(void){

	int product = 1;

	for(int i = 1; i <= 15; i += 2){

		if(i % 2 != 0){

			product *= i;
		}

	}//end for

	printf("[+] The product of odd integers from 1 to 15 is: %d", product);

}//end main